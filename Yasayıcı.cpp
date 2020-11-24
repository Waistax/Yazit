#include "Yasayýcý.h"

#include <fstream>

namespace bad
{
	YasamaSonucu yasama(std::vector<const Belirteç*>& belirteçler, const std::string* dosyaYolu)
	{
		std::vector<std::string> satýrlar;
		std::ifstream dosya(*dosyaYolu);

		if (dosya.is_open())
		{
			std::string satýr;
			while (std::getline(dosya, satýr))
				satýrlar.push_back(satýr);
			dosya.close();
		}
		else
			return YasamaSonucu(true, dosyaYolu, false, 0, 0);

		int satýrNumarasý = 0;
		int sütunNumarasý = 0;
		const std::regex boþluk("^\\s*");
		std::string aktif_satýr;
		std::smatch m;

		for (auto i = satýrlar.begin(); i != satýrlar.end(); i++)
		{
			satýrNumarasý++;
			aktif_satýr = std::regex_replace(*i, boþluk, "");

			while (!aktif_satýr.empty())
			{
				sütunNumarasý = i->size() - aktif_satýr.size() + 1;
				for (int j = 0; j < TÜR_SAYISI; j++)
				{
					const BelirteçBiçimi& biçim = BÝÇÝMLER[j];
					if (std::regex_search(aktif_satýr, m, biçim.desen))
					{
						const std::string d = m[0].str();
						belirteçler.push_back(new Belirteç(biçim.tür, d, dosyaYolu, satýrNumarasý, sütunNumarasý));
						aktif_satýr = aktif_satýr.substr(d.length());
						break;
					}
					else if (j == TÜR_SAYISI - 1)
						return YasamaSonucu(false, dosyaYolu, true, satýrNumarasý, sütunNumarasý);
				}

				aktif_satýr = std::regex_replace(aktif_satýr, boþluk, "");
			}
		}

		return YasamaSonucu(false, dosyaYolu, false, satýrNumarasý, sütunNumarasý);
	}
}

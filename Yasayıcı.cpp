#include "Yasay�c�.h"

#include <fstream>

namespace bad
{
	YasamaSonucu yasama(std::vector<const Belirte�*>& belirte�ler, const std::string* dosyaYolu)
	{
		std::vector<std::string> sat�rlar;
		std::ifstream dosya(*dosyaYolu);

		if (dosya.is_open())
		{
			std::string sat�r;
			while (std::getline(dosya, sat�r))
				sat�rlar.push_back(sat�r);
			dosya.close();
		}
		else
			return YasamaSonucu(true, dosyaYolu, false, 0, 0);

		int sat�rNumaras� = 0;
		int s�tunNumaras� = 0;
		const std::regex bo�luk("^\\s*");
		std::string aktif_sat�r;
		std::smatch m;

		for (auto i = sat�rlar.begin(); i != sat�rlar.end(); i++)
		{
			sat�rNumaras�++;
			aktif_sat�r = std::regex_replace(*i, bo�luk, "");

			while (!aktif_sat�r.empty())
			{
				s�tunNumaras� = i->size() - aktif_sat�r.size() + 1;
				for (int j = 0; j < T�R_SAYISI; j++)
				{
					const Belirte�Bi�imi& bi�im = B���MLER[j];
					if (std::regex_search(aktif_sat�r, m, bi�im.desen))
					{
						const std::string d = m[0].str();
						belirte�ler.push_back(new Belirte�(bi�im.t�r, d, dosyaYolu, sat�rNumaras�, s�tunNumaras�));
						aktif_sat�r = aktif_sat�r.substr(d.length());
						break;
					}
					else if (j == T�R_SAYISI - 1)
						return YasamaSonucu(false, dosyaYolu, true, sat�rNumaras�, s�tunNumaras�);
				}

				aktif_sat�r = std::regex_replace(aktif_sat�r, bo�luk, "");
			}
		}

		return YasamaSonucu(false, dosyaYolu, false, sat�rNumaras�, s�tunNumaras�);
	}
}

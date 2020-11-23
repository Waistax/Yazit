#include "Yasayýcý.h"

#include <fstream>

bad::belirteç::belirteç(const belirteç_türü& tür, dize beden, dize yol, int satýrý, int sütunu) :
	tür{ tür },
	beden{ beden },
	yol{ yol },
	satýrý{ satýrý },
	sütunu{ sütunu }
{}

bad::yasama_sonucu bad::yasama(liste<belirteç>& belirteçler, const dize& dosyaYolu)
{
	bad::liste<bad::dize> satýrlar;
	std::ifstream dosya{ dosyaYolu };

	if (dosya.is_open())
	{
		bad::dize satýr;
		while (std::getline(dosya, satýr))
			satýrlar.push_back(satýr);
		dosya.close();
	}
	else
		return yasama_sonucu{ true, dosyaYolu, false, 0, 0 };

	int satýrNumarasý{ 0 };
	int sütunNumarasý{ 0 };
	const desen boþluk{ "^\\s*" };
	dize aktif_satýr;
	std::smatch m;
	int j;
	for (auto i{ satýrlar.begin() }; i != satýrlar.end(); i++)
	{
		satýrNumarasý++;
		aktif_satýr = std::regex_replace(*i, boþluk, "");

		while (!aktif_satýr.empty())
		{
			sütunNumarasý = i->size() - aktif_satýr.size() + 1;
			j = TÜR_SAYISI;
			while (j --> 0)
			{
				const belirteç_türü& tür{ türler[j] };
				if (std::regex_search(aktif_satýr, m, tür.desen))
				{
					dize d{ m[0].str() };
					belirteçler.push_back(belirteç(tür, d, dosyaYolu, satýrNumarasý, sütunNumarasý));
					aktif_satýr = aktif_satýr.substr(d.length());
					break;
				}
				else if (j == 0)
					return yasama_sonucu{ false, dosyaYolu, true, satýrNumarasý, sütunNumarasý };
			}

			aktif_satýr = std::regex_replace(aktif_satýr, boþluk, "");
		}
	}

	return yasama_sonucu{ false, dosyaYolu, false, satýrNumarasý, sütunNumarasý };
}

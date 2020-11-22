#include "Yasay�c�.h"

#include <fstream>

bad::belirte�::belirte�(const belirte�_t�r�& t�r, dize beden, dize yol, int sat�r�, int s�tunu) :
	t�r{ t�r },
	beden{ beden },
	yol{ yol },
	sat�r�{ sat�r� },
	s�tunu{ s�tunu }
{}

bad::yasama_sonucu bad::yasama(liste<belirte�>& belirte�ler, const dize& dosyaYolu)
{
	bad::liste<bad::dize> sat�rlar;
	std::ifstream dosya{ dosyaYolu };

	if (dosya.is_open())
	{
		bad::dize sat�r;
		while (std::getline(dosya, sat�r))
			sat�rlar.push_back(sat�r);
		dosya.close();
	}
	else
		return yasama_sonucu{ true, dosyaYolu, false, 0, 0 };

	int sat�rNumaras�{ 0 };
	int s�tunNumaras�{ 0 };
	const desen bo�luk{ "^\\s*" };
	dize aktif_sat�r;
	std::smatch m;
	int j;
	for (auto i{ sat�rlar.begin() }; i != sat�rlar.end(); i++)
	{
		sat�rNumaras�++;
		aktif_sat�r = std::regex_replace(*i, bo�luk, "");

		while (!aktif_sat�r.empty())
		{
			s�tunNumaras� = i->size() - aktif_sat�r.size() + 1;
			j = T�R_SAYISI;
			while (j > 0)
			{
				const belirte�_t�r�& t�r{ t�rler[--j] };
				if (std::regex_search(aktif_sat�r, m, t�r.desen))
				{
					dize d{ m[0].str() };
					belirte�ler.push_back(belirte�(t�r, d, dosyaYolu, sat�rNumaras�, s�tunNumaras�));
					aktif_sat�r = aktif_sat�r.substr(d.length());
					break;
				}
				else if (j == 0)
					return yasama_sonucu{ false, dosyaYolu, true, sat�rNumaras�, s�tunNumaras� };
			}

			aktif_sat�r = std::regex_replace(aktif_sat�r, bo�luk, "");
		}
	}

	return yasama_sonucu{ false, dosyaYolu, false, sat�rNumaras�, s�tunNumaras� };
}

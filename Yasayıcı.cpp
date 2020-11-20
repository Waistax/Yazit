#include "Yasay�c�.h"

bad::belirte�::belirte�(const belirte�_t�r�& t�r, dize beden) :
	t�r{ t�r },
	beden{ beden }
{}

bool bad::yasama(liste<belirte�>& belirte�ler, const liste<dize>& sat�rlar)
{
	for (auto i{ sat�rlar.begin() }; i != sat�rlar.end(); i++)
	{
		const desen bo�luk{ "^\\s*" };
		dize aktif_sat�r{ std::regex_replace(*i, bo�luk, "") };
		std::smatch m;
		int j;

		while (!aktif_sat�r.empty())
		{
			j = T�R_SAYISI;
			while (j > 0)
			{
				const belirte�_t�r�& t�r{ t�rler[--j] };
				if (std::regex_search(aktif_sat�r, m, t�r.desen))
				{
					dize d{ m[0].str() };
					belirte�ler.push_back(belirte�(t�r, d));
					aktif_sat�r = aktif_sat�r.substr(d.length());
					break;
				}
				else if (j == 0)
					return false;
			}

			aktif_sat�r = std::regex_replace(aktif_sat�r, bo�luk, "");
		}
	}

	return true;
}

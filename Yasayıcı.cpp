#include "Yasay�c�.h"

bad::belirte�::belirte�(const belirte�_t�r�& t�r, dize beden) :
	t�r{ t�r },
	beden{ beden }
{}

bool bad::yasama(liste<belirte�>& belirte�ler, const dize& sat�r)
{
	const desen bo�luk{ "^\\s*" };
	dize aktif_sat�r{ std::regex_replace(sat�r, bo�luk, "") };
	std::smatch m;
	int i;

	while (!aktif_sat�r.empty())
	{
		i = T�R_SAYISI;
		while (i > 0)
		{
			const belirte�_t�r�& t�r{ t�rler[--i] };
			if (std::regex_search(aktif_sat�r, m, t�r.desen))
			{
				dize d{ m[0].str() };
				belirte�ler.push_back(belirte�(t�r, d));
				aktif_sat�r = aktif_sat�r.substr(d.length());
				break;
			}
			else if (i == 0)
				return false;
		}

		aktif_sat�r = std::regex_replace(aktif_sat�r, bo�luk, "");
	}

	return true;
}

bool bad::yasama(liste<belirte�>& belirte�ler, const liste<const dize>& sat�rlar)
{
	for (auto i{ sat�rlar.begin() }; i != sat�rlar.end(); i++)
		if (!yasama(belirte�ler, *i))
			return false;

	return true;
}

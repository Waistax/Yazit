#include "Yasay�c�.h"

bad::belirte�::belirte�(const belirte�_t�r�& t�r, dize beden) :
	t�r{ t�r },
	beden{ beden }
{}

bool bad::yasama(liste<belirte�>& liste, const dize& dize)
{
	const desen bo�luk{ "^\\s*" };
	bad::dize aktif_dize{ std::regex_replace(dize, bo�luk, "") };
	std::smatch m;
	int i;

	while (!aktif_dize.empty())
	{
		i = T�R_SAYISI;
		while (i > 0)
		{
			const belirte�_t�r�& t�r{ t�rler[--i] };
			if (std::regex_search(aktif_dize, m, t�r.desen))
			{
				bad::dize d{ m[0].str() };
				liste.push_back(belirte�(t�r, d));
				aktif_dize = aktif_dize.substr(d.length());
				break;
			}
			else if (i == 0)
				return false;
		}

		aktif_dize = std::regex_replace(aktif_dize, bo�luk, "");
	}

	return true;
}

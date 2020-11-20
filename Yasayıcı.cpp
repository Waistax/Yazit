#include "Yasayýcý.h"

bad::belirteç::belirteç(const belirteç_türü& tür, dize beden) :
	tür{ tür },
	beden{ beden }
{}

bool bad::yasama(liste<belirteç>& liste, const dize& dize)
{
	desen boþluk{ "^\\s*" };
	bad::dize aktif_dize = std::regex_replace(dize, boþluk, "");
	std::smatch m;

	while (!aktif_dize.empty())
	{
		for (int i{ 0 }; i < TÜR_SAYISI; i++)
		{
			const belirteç_türü& tür = türler[i];
			if (std::regex_search(aktif_dize, m, tür.desen))
			{
				bad::dize d = m[0].str();
				liste.push_back(belirteç(tür, d));
				aktif_dize = aktif_dize.substr(d.length());
				break;
			}
		}

		aktif_dize = std::regex_replace(aktif_dize, boþluk, "");
	}

	return true;
}

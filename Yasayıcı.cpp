#include "Yasayýcý.h"

bad::belirteç::belirteç(const belirteç_türü& tür, dize beden) :
	tür{ tür },
	beden{ beden }
{}

bool bad::yasama(liste<belirteç>& belirteçler, const dize& satýr)
{
	const desen boþluk{ "^\\s*" };
	dize aktif_satýr{ std::regex_replace(satýr, boþluk, "") };
	std::smatch m;
	int i;

	while (!aktif_satýr.empty())
	{
		i = TÜR_SAYISI;
		while (i > 0)
		{
			const belirteç_türü& tür{ türler[--i] };
			if (std::regex_search(aktif_satýr, m, tür.desen))
			{
				dize d{ m[0].str() };
				belirteçler.push_back(belirteç(tür, d));
				aktif_satýr = aktif_satýr.substr(d.length());
				break;
			}
			else if (i == 0)
				return false;
		}

		aktif_satýr = std::regex_replace(aktif_satýr, boþluk, "");
	}

	return true;
}

bool bad::yasama(liste<belirteç>& belirteçler, const liste<const dize>& satýrlar)
{
	for (auto i{ satýrlar.begin() }; i != satýrlar.end(); i++)
		if (!yasama(belirteçler, *i))
			return false;

	return true;
}

#include "Yasayýcý.h"

bad::belirteç::belirteç(const belirteç_türü& tür, dize beden) :
	tür{ tür },
	beden{ beden }
{}

bool bad::yasama(liste<belirteç>& belirteçler, const liste<dize>& satýrlar)
{
	for (auto i{ satýrlar.begin() }; i != satýrlar.end(); i++)
	{
		const desen boþluk{ "^\\s*" };
		dize aktif_satýr{ std::regex_replace(*i, boþluk, "") };
		std::smatch m;
		int j;

		while (!aktif_satýr.empty())
		{
			j = TÜR_SAYISI;
			while (j > 0)
			{
				const belirteç_türü& tür{ türler[--j] };
				if (std::regex_search(aktif_satýr, m, tür.desen))
				{
					dize d{ m[0].str() };
					belirteçler.push_back(belirteç(tür, d));
					aktif_satýr = aktif_satýr.substr(d.length());
					break;
				}
				else if (j == 0)
					return false;
			}

			aktif_satýr = std::regex_replace(aktif_satýr, boþluk, "");
		}
	}

	return true;
}

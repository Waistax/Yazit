#include "SoyutSözdizimi.h"

bad::sözdizimi::sözdizimi(sözdizimi* üst_dizim, const belirteç* söz) :
	üst_dizim{ üst_dizim },
	alt_dizimler{},
	söz{ söz }
{
	if (üst_dizim != nullptr)
		üst_dizim->alt_dizimler.push_back(*this);
}

bad::sözdizimi* bad::ayrýþtýr(const liste<belirteç>& belirteçler)
{
	sözdizimi* ana = &sözdizimi{ nullptr, nullptr };
	sözdizimi* baþ = nullptr;

	for (auto i = belirteçler.begin(); i != belirteçler.end(); i++)
	{
		if (baþ == nullptr)
		{
			baþ = &sözdizimi{ ana, &*i };
			if ((++i)->tür.aile != belirteç_ailesi::GÖVDE_BAÞI)
				return nullptr;
			continue;
		}

		switch (i->tür.aile)
		{
		case belirteç_ailesi::TANIMLAYICI:

		}
	}

	return ana;
}

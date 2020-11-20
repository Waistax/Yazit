#include "SoyutS�zdizimi.h"

bad::s�zdizimi::s�zdizimi(s�zdizimi* �st_dizim, const belirte�* s�z) :
	�st_dizim{ �st_dizim },
	alt_dizimler{},
	s�z{ s�z }
{
	if (�st_dizim != nullptr)
		�st_dizim->alt_dizimler.push_back(*this);
}

bad::s�zdizimi* bad::ayr��t�r(const liste<belirte�>& belirte�ler)
{
	s�zdizimi* ana = &s�zdizimi{ nullptr, nullptr };
	s�zdizimi* ba� = nullptr;

	for (auto i = belirte�ler.begin(); i != belirte�ler.end(); i++)
	{
		if (ba� == nullptr)
		{
			ba� = &s�zdizimi{ ana, &*i };
			if ((++i)->t�r.aile != belirte�_ailesi::G�VDE_BA�I)
				return nullptr;
			continue;
		}

		switch (i->t�r.aile)
		{
		case belirte�_ailesi::TANIMLAYICI:

		}
	}

	return ana;
}

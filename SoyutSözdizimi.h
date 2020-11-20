#ifndef SOYUT_SÖZDÝZÝMÝ
#define SOYUT_SÖZDÝZÝMÝ

#include "Yasayýcý.h"

namespace bad
{
	struct sözdizimi
	{
		sözdizimi* üst_dizim;
		liste<sözdizimi> alt_dizimler;
		const belirteç* söz;

		sözdizimi(sözdizimi* üst_dizim, const belirteç* söz);
	};

	sözdizimi* ayrýþtýr(const liste<belirteç>& belirteçler);
}

#endif

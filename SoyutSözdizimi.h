#ifndef SOYUT_SÖZDÝZÝMÝ
#define SOYUT_SÖZDÝZÝMÝ

#include "SSAAnlamsalNesnesi.h"
#include "Yasayýcý.h"

namespace bad
{
	struct ayrýþtýrma_sonucu
	{
		const bool hata;
		const belirteç* hatalýBelirteç;
		const belirteç_türü* beklenenBelirteç;
		const Tasarý& tasarý;
	};

	ayrýþtýrma_sonucu ayrýþtýr(const liste<belirteç>& belirteçler);
}

#endif

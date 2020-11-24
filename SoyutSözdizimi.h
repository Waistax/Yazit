#ifndef SOYUT_SÖZDÝZÝMÝ
#define SOYUT_SÖZDÝZÝMÝ

#include "SSANesnesi.h"
#include "Yasayýcý.h"

namespace bad
{
	struct ayrýþtýrma_sonucu
	{
		const paiþ<Tasarý> tasarý;
		const paiþ<belirteç> hatalýBelirteç;
		//const belirteç_türü* beklenenBelirteç;

		ayrýþtýrma_sonucu(const paiþ<Tasarý>& tasarý, const paiþ<belirteç>& hatalýBelirteç);
	};

	struct unsur
	{
		const paiþ<belirteç> belirteç;
		const paiþ<SSANesnesi> nesne;

		unsur(const paiþ<bad::belirteç>& belirteç);

		unsur(const paiþ<SSANesnesi>& nesne);
	};

	struct yoklama_sonucu
	{
		const int kullanýlanSayýsý;
		const paiþ<SSANesnesi> sonucu;
	};

	struct kural
	{
		virtual yoklama_sonucu yokla(const liste<unsur>& eldekiler) const = 0;
	};

	struct kural_hazýr_bilgi : public kural
	{
		virtual yoklama_sonucu yokla(const liste<unsur>& eldekiler) const;
	};

	constexpr int KURAL_SAYISI = 1;

	kural_hazýr_bilgi k_hazýr_bilgi;

	const kural *kurallar[KURAL_SAYISI] =
	{
		&k_hazýr_bilgi
	};

	öziþ<ayrýþtýrma_sonucu> ayrýþtýr(const liste<paiþ<belirteç>>& belirteçler);
}

#endif

#ifndef SOYUT_SÖZDÝZÝMÝ
#define SOYUT_SÖZDÝZÝMÝ

#include "SSAAnlamsalNesnesi.h"
#include "Yasayýcý.h"

namespace bad
{
	struct ayrýþtýrma_sonucu
	{
		const Tasarý* tasarý;
		const belirteç* hatalýBelirteç;
		//const belirteç_türü* beklenenBelirteç;
	};

	struct unsur
	{
		const belirteç* belirteç;
		const BildirimVeyaTaným* bildirimVeyaTaným;

		unsur(const bad::belirteç* belirteç);

		unsur(const BildirimVeyaTaným* bildirimVeyaTaným);
	};

	struct yoklama_sonucu
	{
		const int kullanýlanSayýsý;
		const paiþ<BildirimVeyaTaným> sonucu;
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

	ayrýþtýrma_sonucu ayrýþtýr(const liste<belirteç>& belirteçler);
}

#endif

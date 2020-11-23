#ifndef SOYUT_S�ZD�Z�M�
#define SOYUT_S�ZD�Z�M�

#include "SSAAnlamsalNesnesi.h"
#include "Yasay�c�.h"

namespace bad
{
	struct ayr��t�rma_sonucu
	{
		const Tasar�* tasar�;
		const belirte�* hatal�Belirte�;
		//const belirte�_t�r�* beklenenBelirte�;
	};

	struct unsur
	{
		const belirte�* belirte�;
		const BildirimVeyaTan�m* bildirimVeyaTan�m;

		unsur(const bad::belirte�* belirte�);

		unsur(const BildirimVeyaTan�m* bildirimVeyaTan�m);
	};

	struct yoklama_sonucu
	{
		const int kullan�lanSay�s�;
		const pai�<BildirimVeyaTan�m> sonucu;
	};

	struct kural
	{
		virtual yoklama_sonucu yokla(const liste<unsur>& eldekiler) const = 0;
	};

	struct kural_haz�r_bilgi : public kural
	{
		virtual yoklama_sonucu yokla(const liste<unsur>& eldekiler) const;
	};

	constexpr int KURAL_SAYISI = 1;

	kural_haz�r_bilgi k_haz�r_bilgi;

	const kural *kurallar[KURAL_SAYISI] =
	{
		&k_haz�r_bilgi
	};

	ayr��t�rma_sonucu ayr��t�r(const liste<belirte�>& belirte�ler);
}

#endif

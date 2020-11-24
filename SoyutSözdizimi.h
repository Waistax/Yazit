#ifndef SOYUT_S�ZD�Z�M�
#define SOYUT_S�ZD�Z�M�

#include "SSANesnesi.h"
#include "Yasay�c�.h"

namespace bad
{
	struct ayr��t�rma_sonucu
	{
		const pai�<Tasar�> tasar�;
		const pai�<belirte�> hatal�Belirte�;
		//const belirte�_t�r�* beklenenBelirte�;

		ayr��t�rma_sonucu(const pai�<Tasar�>& tasar�, const pai�<belirte�>& hatal�Belirte�);
	};

	struct unsur
	{
		const pai�<belirte�> belirte�;
		const pai�<SSANesnesi> nesne;

		unsur(const pai�<bad::belirte�>& belirte�);

		unsur(const pai�<SSANesnesi>& nesne);
	};

	struct yoklama_sonucu
	{
		const int kullan�lanSay�s�;
		const pai�<SSANesnesi> sonucu;
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

	�zi�<ayr��t�rma_sonucu> ayr��t�r(const liste<pai�<belirte�>>& belirte�ler);
}

#endif

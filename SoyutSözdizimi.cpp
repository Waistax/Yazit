#include "SoyutSözdizimi.h"

namespace bad
{
	ayrýþtýrma_sonucu::ayrýþtýrma_sonucu(
		const paiþ<Tasarý>& tasarý,
		const paiþ<belirteç>& hatalýBelirteç)
		:
		tasarý{ tasarý },
		hatalýBelirteç{ hatalýBelirteç }
	{}

	unsur::unsur(const paiþ<bad::belirteç>& belirteç) :
		belirteç{ belirteç },
		nesne{ nullptr }
	{}

	unsur::unsur(const paiþ<SSANesnesi>& nesne) :
		belirteç{ nullptr },
		nesne{ nesne }
	{}

	öziþ<ayrýþtýrma_sonucu> ayrýþtýr(const liste<paiþ<belirteç>>& belirteçler)
	{
		liste<unsur> eldekiler;
		int j;

		for (auto i{ belirteçler.begin() }; i != belirteçler.end(); i++)
		{
			eldekiler.push_back(unsur{ *i });
			j = KURAL_SAYISI;

			while (j-- > 0)
			{
				const kural* kural = kurallar[j];
				const yoklama_sonucu yoklama = kural->yokla(eldekiler);

				if (yoklama.kullanýlanSayýsý)
				{
					for (int k{ 0 }; k < yoklama.kullanýlanSayýsý; k++)
						eldekiler.pop_back();
					eldekiler.push_back(unsur{ yoklama.sonucu });
					break;
				}
			}

			return std::make_unique<ayrýþtýrma_sonucu, paiþ, paiþ>(nullptr, *i);
		}

		if (eldekiler.size() > 1)
			return özgün<ayrýþtýrma_sonucu>(nullptr, nullptr);

		return özgün<ayrýþtýrma_sonucu>(std::dynamic_pointer_cast<Tasarý>(eldekiler.begin()->nesne), nullptr);
	}

	yoklama_sonucu kural_hazýr_bilgi::yokla(const liste<unsur>& eldekiler) const
	{
		if (eldekiler.size() < 1)
			return yoklama_sonucu{ 0, nullptr };
		unsur son = *--eldekiler.end();
		if (son.belirteç || son.belirteç->tür.aile != belirteç_ailesi::DEÐER)
			return yoklama_sonucu{ 0, nullptr };
		if (son.belirteç->tür.ad == "KARAKTER")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(paylaþýlan<KarakterHazýrBilgisi>(son.belirteç->beden)) };
		if (son.belirteç->tür.ad == "DÝZE")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(paylaþýlan<DizeHazýrBilgisi>(son.belirteç->beden)) };
		if (son.belirteç->tür.ad == "KESÝR")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(paylaþýlan<GerçekHazýrBilgisi>(son.belirteç->beden)) };
		if (son.belirteç->tür.ad == "SAYI")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(paylaþýlan<TamsayýHazýrBilgisi>(son.belirteç->beden)) };
		return yoklama_sonucu{ 0, nullptr };
	}
}

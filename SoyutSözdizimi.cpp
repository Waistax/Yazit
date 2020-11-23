#include "SoyutSözdizimi.h"

namespace bad
{
	unsur::unsur(const bad::belirteç* belirteç) :
		belirteç{ belirteç },
		bildirimVeyaTaným{ nullptr }
	{}

	unsur::unsur(const BildirimVeyaTaným* bildirimVeyaTaným) :
		belirteç{ nullptr },
		bildirimVeyaTaným{ bildirimVeyaTaným }
	{}

	ayrýþtýrma_sonucu ayrýþtýr(const liste<belirteç>& belirteçler)
	{
		KüreselKapsam dýþKapsam;
		Tasarý tasarý;
		tasarý.dýþKapsam = &dýþKapsam;
		liste<unsur> eldekiler;
		int j;

		for (auto i{ belirteçler.begin() }; i != belirteçler.end(); i++)
		{
			eldekiler.push_back(unsur{ &*i });
			j = KURAL_SAYISI;

			while (j --> 0)
			{
				const kural* kural = kurallar[j];
				const yoklama_sonucu yoklama = kural->yokla(eldekiler);
				
				if (yoklama.kullanýlanSayýsý)
				{
					for (int k{ 0 }; k < yoklama.kullanýlanSayýsý; k++)
						eldekiler.pop_back();
					eldekiler.push_back(unsur{ &*yoklama.sonucu });
					break;
				}
			}

			return ayrýþtýrma_sonucu{ nullptr, &*i };
		}

		if (eldekiler.size() > 1)
			return ayrýþtýrma_sonucu{ nullptr, nullptr };

		return ayrýþtýrma_sonucu{ dynamic_cast<const Tasarý*>((*eldekiler.end()).bildirimVeyaTaným), nullptr };
	}

	yoklama_sonucu kural_hazýr_bilgi::yokla(const liste<unsur>& eldekiler) const
	{
		if (eldekiler.size() < 1)
			return yoklama_sonucu{ 0, nullptr };
		unsur son = *eldekiler.end();
		if (son.belirteç || son.belirteç->tür.aile != belirteç_ailesi::DEÐER)
			return yoklama_sonucu{ 0, nullptr };
		if (son.belirteç->tür.ad == "KARAKTER")
			return yoklama_sonucu{ 1, std::static_pointer_cast<BildirimVeyaTaným>(std::make_shared<KarakterHazýrBilgisi>(son.belirteç->beden)) };
	}
}

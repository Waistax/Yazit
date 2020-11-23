#include "SoyutS�zdizimi.h"

namespace bad
{
	unsur::unsur(const bad::belirte�* belirte�) :
		belirte�{ belirte� },
		bildirimVeyaTan�m{ nullptr }
	{}

	unsur::unsur(const BildirimVeyaTan�m* bildirimVeyaTan�m) :
		belirte�{ nullptr },
		bildirimVeyaTan�m{ bildirimVeyaTan�m }
	{}

	ayr��t�rma_sonucu ayr��t�r(const liste<belirte�>& belirte�ler)
	{
		K�reselKapsam d��Kapsam;
		Tasar� tasar�;
		tasar�.d��Kapsam = &d��Kapsam;
		liste<unsur> eldekiler;
		int j;

		for (auto i{ belirte�ler.begin() }; i != belirte�ler.end(); i++)
		{
			eldekiler.push_back(unsur{ &*i });
			j = KURAL_SAYISI;

			while (j --> 0)
			{
				const kural* kural = kurallar[j];
				const yoklama_sonucu yoklama = kural->yokla(eldekiler);
				
				if (yoklama.kullan�lanSay�s�)
				{
					for (int k{ 0 }; k < yoklama.kullan�lanSay�s�; k++)
						eldekiler.pop_back();
					eldekiler.push_back(unsur{ &*yoklama.sonucu });
					break;
				}
			}

			return ayr��t�rma_sonucu{ nullptr, &*i };
		}

		if (eldekiler.size() > 1)
			return ayr��t�rma_sonucu{ nullptr, nullptr };

		return ayr��t�rma_sonucu{ dynamic_cast<const Tasar�*>((*eldekiler.end()).bildirimVeyaTan�m), nullptr };
	}

	yoklama_sonucu kural_haz�r_bilgi::yokla(const liste<unsur>& eldekiler) const
	{
		if (eldekiler.size() < 1)
			return yoklama_sonucu{ 0, nullptr };
		unsur son = *eldekiler.end();
		if (son.belirte� || son.belirte�->t�r.aile != belirte�_ailesi::DE�ER)
			return yoklama_sonucu{ 0, nullptr };
		if (son.belirte�->t�r.ad == "KARAKTER")
			return yoklama_sonucu{ 1, std::static_pointer_cast<BildirimVeyaTan�m>(std::make_shared<KarakterHaz�rBilgisi>(son.belirte�->beden)) };
	}
}

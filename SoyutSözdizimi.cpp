#include "SoyutS�zdizimi.h"

namespace bad
{
	ayr��t�rma_sonucu::ayr��t�rma_sonucu(
		const pai�<Tasar�>& tasar�,
		const pai�<belirte�>& hatal�Belirte�)
		:
		tasar�{ tasar� },
		hatal�Belirte�{ hatal�Belirte� }
	{}

	unsur::unsur(const pai�<bad::belirte�>& belirte�) :
		belirte�{ belirte� },
		nesne{ nullptr }
	{}

	unsur::unsur(const pai�<SSANesnesi>& nesne) :
		belirte�{ nullptr },
		nesne{ nesne }
	{}

	�zi�<ayr��t�rma_sonucu> ayr��t�r(const liste<pai�<belirte�>>& belirte�ler)
	{
		liste<unsur> eldekiler;
		int j;

		for (auto i{ belirte�ler.begin() }; i != belirte�ler.end(); i++)
		{
			eldekiler.push_back(unsur{ *i });
			j = KURAL_SAYISI;

			while (j-- > 0)
			{
				const kural* kural = kurallar[j];
				const yoklama_sonucu yoklama = kural->yokla(eldekiler);

				if (yoklama.kullan�lanSay�s�)
				{
					for (int k{ 0 }; k < yoklama.kullan�lanSay�s�; k++)
						eldekiler.pop_back();
					eldekiler.push_back(unsur{ yoklama.sonucu });
					break;
				}
			}

			return std::make_unique<ayr��t�rma_sonucu, pai�, pai�>(nullptr, *i);
		}

		if (eldekiler.size() > 1)
			return �zg�n<ayr��t�rma_sonucu>(nullptr, nullptr);

		return �zg�n<ayr��t�rma_sonucu>(std::dynamic_pointer_cast<Tasar�>(eldekiler.begin()->nesne), nullptr);
	}

	yoklama_sonucu kural_haz�r_bilgi::yokla(const liste<unsur>& eldekiler) const
	{
		if (eldekiler.size() < 1)
			return yoklama_sonucu{ 0, nullptr };
		unsur son = *--eldekiler.end();
		if (son.belirte� || son.belirte�->t�r.aile != belirte�_ailesi::DE�ER)
			return yoklama_sonucu{ 0, nullptr };
		if (son.belirte�->t�r.ad == "KARAKTER")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(payla��lan<KarakterHaz�rBilgisi>(son.belirte�->beden)) };
		if (son.belirte�->t�r.ad == "D�ZE")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(payla��lan<DizeHaz�rBilgisi>(son.belirte�->beden)) };
		if (son.belirte�->t�r.ad == "KES�R")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(payla��lan<Ger�ekHaz�rBilgisi>(son.belirte�->beden)) };
		if (son.belirte�->t�r.ad == "SAYI")
			return yoklama_sonucu{ 1, std::static_pointer_cast<SSANesnesi>(payla��lan<Tamsay�Haz�rBilgisi>(son.belirte�->beden)) };
		return yoklama_sonucu{ 0, nullptr };
	}
}

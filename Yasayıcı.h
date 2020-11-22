#ifndef YASIYICI
#define YASAYICI

#include "Türler.h"

namespace bad
{
	enum class belirteç_ailesi : unsigned char
	{
		TANIMLAYICI,
		DEÐER,
		TEK_ÝÞLEÇ,
		ÇÝFT_ÝÞLEÇ,
		BELÝRSÝZ_ÝÞLEÇ,
		AYRAÇ_AÇAN_ÝÞLEÇ,
		AYRAÇ_KAPATAN_ÝÞLEÇ,
		GÖVDE_BAÞI,
		GÖVDE_SONU,
		DEMEÇ
	};

	struct belirteç_türü
	{
		belirteç_ailesi aile;
		dize ad;
		desen desen;
	};

	struct belirteç
	{
		const belirteç_türü& tür;
		dize beden;
		dize yol;
		int satýrý;
		int sütunu;

		belirteç(const belirteç_türü& tür, dize beden, dize yol, int satýrý, int sütunu);
	};

	constexpr int TÜR_SAYISI = 53;

	const belirteç_türü türler[TÜR_SAYISI] =
	{
		belirteç_türü{ belirteç_ailesi::DEMEÇ, dize{ "DEMEÇ" }, desen{ "^;" } },
		belirteç_türü{ belirteç_ailesi::GÖVDE_SONU, dize{ "GÖVDE_SONU" }, desen{ "^\\}" } },
		belirteç_türü{ belirteç_ailesi::GÖVDE_BAÞI, dize{ "GÖVDE_BAÞI" }, desen{ "^\\{" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "ATAMA" }, desen{ "^=" } },
		belirteç_türü{ belirteç_ailesi::BELÝRSÝZ_ÝÞLEÇ, dize{ "VE" }, desen{ "^&" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "VEYA" }, desen{ "^\\|" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "YA_DA" }, desen{ "^\\^" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "BÜYÜKTÜR" }, desen{ "^>" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "KÜÇÜKTÜR" }, desen{ "^<" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "KALAN" }, desen{ "^%" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "BÖLME" }, desen{ "^\\/" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "SIRALAMA" }, desen{ "^," } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "NESNE_ÖÐE_ERÝÞÝM" }, desen{ "^\\." } },
		belirteç_türü{ belirteç_ailesi::BELÝRSÝZ_ÝÞLEÇ, dize{ "KOÞULLU_DEÐER_KAPAMA" }, desen{ "^:" } },
		belirteç_türü{ belirteç_ailesi::BELÝRSÝZ_ÝÞLEÇ, dize{ "KOÞULLU_DEÐER_AÇMA" }, desen{ "^\\?" } },
		belirteç_türü{ belirteç_ailesi::BELÝRSÝZ_ÝÞLEÇ, dize{ "ÇARPMA" }, desen{ "^\\*" } },
		belirteç_türü{ belirteç_ailesi::BELÝRSÝZ_ÝÞLEÇ, dize{ "ÇIKARMA" }, desen{ "^-" } },
		belirteç_türü{ belirteç_ailesi::BELÝRSÝZ_ÝÞLEÇ, dize{ "TOPLAMA" }, desen{ "^\\+" } },
		belirteç_türü{ belirteç_ailesi::TEK_ÝÞLEÇ, dize{ "BÝTSEL_DEÐÝL" }, desen{ "^~" } },
		belirteç_türü{ belirteç_ailesi::TEK_ÝÞLEÇ, dize{ "MANTIKSAL_DEÐÝL" }, desen{ "^!" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "VEYA_ATAMA" }, desen{ "^\\|=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "YA_DA_ATAMA" }, desen{ "^\\^=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "VE_ATAMA" }, desen{ "^&=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "SAÐA_KAYAN_ATAMA" }, desen{ "^>>=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "SOLA_KAYAN_ATAMA" }, desen{ "^<<=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "FARK_ATAMA" }, desen{ "^-=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "TOPLAM_ATAMA" }, desen{ "^\\+=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "KALAN_ATAMA" }, desen{ "^%=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "BÖLÜM_ATAMA" }, desen{ "^\\/=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "ÇARPIM_ATAMA" }, desen{ "^\\*=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "AYRILIM" }, desen{ "^\\|\\|" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "BÝRLEÞÝM" }, desen{ "^&&" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "EÞÝT_DEÐÝLDÝR" }, desen{ "^!=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "EÞÝTTÝR" }, desen{ "^==" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "BÜYÜKTÜR_VEYA_EÞÝTTÝR" }, desen{ "^>=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "KÜÇÜKTÜR_VEYA_EÞÝTTÝR" }, desen{ "^<=" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "SAÐA_KAYDIRMA" }, desen{ "^>>" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "SOLA_KAYDIRMA" }, desen{ "^<<" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "ÝÞARETÇÝ_ÖÐE_ERÝÞÝM" }, desen{ "^->" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "ÝÞARETÇÝ_ÖÐE_ÝÞARETÇÝ" }, desen{ "^->\\*" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "NESNE_ÖÐE_ÝÞARETÇÝ" }, desen{ "^\\.\\*" } },
		belirteç_türü{ belirteç_ailesi::AYRAÇ_KAPATAN_ÝÞLEÇ, dize{ "KÖÞELÝ_AYRAÇ_KAPAMA" }, desen{ "^\\]" } },
		belirteç_türü{ belirteç_ailesi::AYRAÇ_AÇAN_ÝÞLEÇ, dize{ "KÖÞELÝ_AYRAÇ_AÇMA" }, desen{ "^\\[" } },
		belirteç_türü{ belirteç_ailesi::AYRAÇ_KAPATAN_ÝÞLEÇ, dize{ "AYRAÇ_KAPAMA" }, desen{ "^\\)" } },
		belirteç_türü{ belirteç_ailesi::AYRAÇ_AÇAN_ÝÞLEÇ, dize{ "AYRAÇ_AÇMA" }, desen{ "^\\(" } },
		belirteç_türü{ belirteç_ailesi::TEK_ÝÞLEÇ, dize{ "AZALT" }, desen{ "^--" } },
		belirteç_türü{ belirteç_ailesi::TEK_ÝÞLEÇ, dize{ "ARTTIR" }, desen{ "^\\+\\+" } },
		belirteç_türü{ belirteç_ailesi::ÇÝFT_ÝÞLEÇ, dize{ "KAPSAM" }, desen{ "^::" } },
		belirteç_türü{ belirteç_ailesi::DEÐER, dize{ "SAYI" }, desen{ "^\\d+" } },
		belirteç_türü{ belirteç_ailesi::DEÐER, dize{ "KESÝR" }, desen{ "^\\d*\\.\\d+" } },
		belirteç_türü{ belirteç_ailesi::DEÐER, dize{ "DÝZE" }, desen{ "^\"[^\"\\\\\\n]*(?:\\\\.[^\"\\\\\\n]*)*\"" } },
		belirteç_türü{ belirteç_ailesi::DEÐER, dize{ "KARAKTER" }, desen{ "^'([^'\\\\\\n]|\\\\.)'" } },
		belirteç_türü{ belirteç_ailesi::TANIMLAYICI, dize{ "TANIMLAYICI" }, desen{ "^[a-zA-ZÇÐÝÖÞÜçðýöþü_][a-zA-ZÇÐÝÖÞÜçðýöþü_\\d]*" } }
	};

	struct yasama_sonucu
	{
		const bool dosyaHatasý;
		const dize dosyaYolu;
		const bool hata;
		const int hataSatýrý;
		const int hataSütunu;
	};

	yasama_sonucu yasama(liste<belirteç>& belirteçler, const dize& dosyaYolu);
}

#endif

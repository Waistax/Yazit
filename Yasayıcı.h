#ifndef YASIYICI
#define YASAYICI

#include "Türler.h"

namespace bad
{
	struct belirteç_türü
	{
		dize ad;
		desen desen;
	};

	struct belirteç
	{
		const belirteç_türü& tür;
		dize beden;

		belirteç(const belirteç_türü& tür, dize beden);
	};

	constexpr int TÜR_SAYISI = 51;

	const belirteç_türü türler[TÜR_SAYISI] =
	{
		belirteç_türü{ dize{ "DEMEÇ" }, desen{ "^;" } },
		belirteç_türü{ dize{ "ATAMA" }, desen{ "^=" } },
		belirteç_türü{ dize{ "VE" }, desen{ "^&" } },
		belirteç_türü{ dize{ "VEYA" }, desen{ "^\\|" } },
		belirteç_türü{ dize{ "YA_DA" }, desen{ "^\\^" } },
		belirteç_türü{ dize{ "BÜYÜKTÜR" }, desen{ "^>" } },
		belirteç_türü{ dize{ "KÜÇÜKTÜR" }, desen{ "^<" } },
		belirteç_türü{ dize{ "KALAN" }, desen{ "^%" } },
		belirteç_türü{ dize{ "BÖLME" }, desen{ "^\\/" } },
		belirteç_türü{ dize{ "SIRALAMA" }, desen{ "^," } },
		belirteç_türü{ dize{ "NESNE_ÖÐE_ERÝÞÝM" }, desen{ "^\\." } },
		belirteç_türü{ dize{ "KOÞULLU_DEÐER_KAPAMA" }, desen{ "^:" } },
		belirteç_türü{ dize{ "KOÞULLU_DEÐER_AÇMA" }, desen{ "^\\?" } },
		belirteç_türü{ dize{ "ÇARPMA" }, desen{ "^\\*" } },
		belirteç_türü{ dize{ "ÇIKARMA" }, desen{ "^-" } },
		belirteç_türü{ dize{ "TOPLAMA" }, desen{ "^\\+" } },
		belirteç_türü{ dize{ "BÝTSEL_DEÐÝL" }, desen{ "^~" } },
		belirteç_türü{ dize{ "MANTIKSAL_DEÐÝL" }, desen{ "^!" } },
		belirteç_türü{ dize{ "VEYA_ATAMA" }, desen{ "^\\|=" } },
		belirteç_türü{ dize{ "YA_DA_ATAMA" }, desen{ "^\\^=" } },
		belirteç_türü{ dize{ "VE_ATAMA" }, desen{ "^&=" } },
		belirteç_türü{ dize{ "SAÐA_KAYAN_ATAMA" }, desen{ "^>>=" } },
		belirteç_türü{ dize{ "SOLA_KAYAN_ATAMA" }, desen{ "^<<=" } },
		belirteç_türü{ dize{ "FARK_ATAMA" }, desen{ "^-=" } },
		belirteç_türü{ dize{ "TOPLAM_ATAMA" }, desen{ "^\\+=" } },
		belirteç_türü{ dize{ "KALAN_ATAMA" }, desen{ "^%=" } },
		belirteç_türü{ dize{ "BÖLÜM_ATAMA" }, desen{ "^\\/=" } },
		belirteç_türü{ dize{ "ÇARPIM_ATAMA" }, desen{ "^\\*=" } },
		belirteç_türü{ dize{ "AYRILIM" }, desen{ "^\\|\\|" } },
		belirteç_türü{ dize{ "BÝRLEÞÝM" }, desen{ "^&&" } },
		belirteç_türü{ dize{ "EÞÝT_DEÐÝLDÝR" }, desen{ "^!=" } },
		belirteç_türü{ dize{ "EÞÝTTÝR" }, desen{ "^==" } },
		belirteç_türü{ dize{ "BÜYÜKTÜR_VEYA_EÞÝTTÝR" }, desen{ "^>=" } },
		belirteç_türü{ dize{ "KÜÇÜKTÜR_VEYA_EÞÝTTÝR" }, desen{ "^<=" } },
		belirteç_türü{ dize{ "SAÐA_KAYDIRMA" }, desen{ "^>>" } },
		belirteç_türü{ dize{ "SOLA_KAYDIRMA" }, desen{ "^<<" } },
		belirteç_türü{ dize{ "ÝÞARETÇÝ_ÖÐE_ERÝÞÝM" }, desen{ "^->" } },
		belirteç_türü{ dize{ "ÝÞARETÇÝ_ÖÐE_ÝÞARETÇÝ" }, desen{ "^->\\*" } },
		belirteç_türü{ dize{ "NESNE_ÖÐE_ÝÞARETÇÝ" }, desen{ "^\\.\\*" } },
		belirteç_türü{ dize{ "KÖÞELÝ_AYRAÇ_KAPAMA" }, desen{ "^\\]" } },
		belirteç_türü{ dize{ "KÖÞELÝ_AYRAÇ_AÇMA" }, desen{ "^\\[" } },
		belirteç_türü{ dize{ "AYRAÇ_KAPAMA" }, desen{ "^\\)" } },
		belirteç_türü{ dize{ "AYRAÇ_AÇMA" }, desen{ "^\\(" } },
		belirteç_türü{ dize{ "SONRA_AZALT" }, desen{ "^--" } },
		belirteç_türü{ dize{ "SONRA_ARTTIR" }, desen{ "^\\+\\+" } },
		belirteç_türü{ dize{ "KAPSAM" }, desen{ "^::" } },
		belirteç_türü{ dize{ "SAYI" }, desen{ "^\\d+" } },
		belirteç_türü{ dize{ "KESÝR" }, desen{ "^\\d*\\.\\d+" } },
		belirteç_türü{ dize{ "DÝZE" }, desen{ "^\"[^\"\\\\\\n]*(?:\\\\.[^\"\\\\\\n]*)*\"" } },
		belirteç_türü{ dize{ "KARAKTER" }, desen{ "^'([^'\\\\\\n]|\\\\.)'" } },
		belirteç_türü{ dize{ "TANIMLAYICI" }, desen{ "^[a-zA-ZÇÐÝÖÞÜçðýöþü_][a-zA-ZÇÐÝÖÞÜçðýöþü_\\d]*" } }
	};

	bool yasama(liste<belirteç>& belirteçler, const liste<dize>& satýrlar);
}

#endif

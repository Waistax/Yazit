#ifndef YASIYICI
#define YASAYICI

#include "T�rler.h"

namespace bad
{
	struct belirte�_t�r�
	{
		dize ad;
		desen desen;
	};

	struct belirte�
	{
		const belirte�_t�r�& t�r;
		dize beden;

		belirte�(const belirte�_t�r�& t�r, dize beden);
	};

	constexpr int T�R_SAYISI = 51;

	const belirte�_t�r� t�rler[T�R_SAYISI] =
	{
		belirte�_t�r�{ dize{ "DEME�" }, desen{ "^;" } },
		belirte�_t�r�{ dize{ "ATAMA" }, desen{ "^=" } },
		belirte�_t�r�{ dize{ "VE" }, desen{ "^&" } },
		belirte�_t�r�{ dize{ "VEYA" }, desen{ "^\\|" } },
		belirte�_t�r�{ dize{ "YA_DA" }, desen{ "^\\^" } },
		belirte�_t�r�{ dize{ "B�Y�KT�R" }, desen{ "^>" } },
		belirte�_t�r�{ dize{ "K���KT�R" }, desen{ "^<" } },
		belirte�_t�r�{ dize{ "KALAN" }, desen{ "^%" } },
		belirte�_t�r�{ dize{ "B�LME" }, desen{ "^\\/" } },
		belirte�_t�r�{ dize{ "SIRALAMA" }, desen{ "^," } },
		belirte�_t�r�{ dize{ "NESNE_��E_ER���M" }, desen{ "^\\." } },
		belirte�_t�r�{ dize{ "KO�ULLU_DE�ER_KAPAMA" }, desen{ "^:" } },
		belirte�_t�r�{ dize{ "KO�ULLU_DE�ER_A�MA" }, desen{ "^\\?" } },
		belirte�_t�r�{ dize{ "�ARPMA" }, desen{ "^\\*" } },
		belirte�_t�r�{ dize{ "�IKARMA" }, desen{ "^-" } },
		belirte�_t�r�{ dize{ "TOPLAMA" }, desen{ "^\\+" } },
		belirte�_t�r�{ dize{ "B�TSEL_DE��L" }, desen{ "^~" } },
		belirte�_t�r�{ dize{ "MANTIKSAL_DE��L" }, desen{ "^!" } },
		belirte�_t�r�{ dize{ "VEYA_ATAMA" }, desen{ "^\\|=" } },
		belirte�_t�r�{ dize{ "YA_DA_ATAMA" }, desen{ "^\\^=" } },
		belirte�_t�r�{ dize{ "VE_ATAMA" }, desen{ "^&=" } },
		belirte�_t�r�{ dize{ "SA�A_KAYAN_ATAMA" }, desen{ "^>>=" } },
		belirte�_t�r�{ dize{ "SOLA_KAYAN_ATAMA" }, desen{ "^<<=" } },
		belirte�_t�r�{ dize{ "FARK_ATAMA" }, desen{ "^-=" } },
		belirte�_t�r�{ dize{ "TOPLAM_ATAMA" }, desen{ "^\\+=" } },
		belirte�_t�r�{ dize{ "KALAN_ATAMA" }, desen{ "^%=" } },
		belirte�_t�r�{ dize{ "B�L�M_ATAMA" }, desen{ "^\\/=" } },
		belirte�_t�r�{ dize{ "�ARPIM_ATAMA" }, desen{ "^\\*=" } },
		belirte�_t�r�{ dize{ "AYRILIM" }, desen{ "^\\|\\|" } },
		belirte�_t�r�{ dize{ "B�RLE��M" }, desen{ "^&&" } },
		belirte�_t�r�{ dize{ "E��T_DE��LD�R" }, desen{ "^!=" } },
		belirte�_t�r�{ dize{ "E��TT�R" }, desen{ "^==" } },
		belirte�_t�r�{ dize{ "B�Y�KT�R_VEYA_E��TT�R" }, desen{ "^>=" } },
		belirte�_t�r�{ dize{ "K���KT�R_VEYA_E��TT�R" }, desen{ "^<=" } },
		belirte�_t�r�{ dize{ "SA�A_KAYDIRMA" }, desen{ "^>>" } },
		belirte�_t�r�{ dize{ "SOLA_KAYDIRMA" }, desen{ "^<<" } },
		belirte�_t�r�{ dize{ "��ARET��_��E_ER���M" }, desen{ "^->" } },
		belirte�_t�r�{ dize{ "��ARET��_��E_��ARET��" }, desen{ "^->\\*" } },
		belirte�_t�r�{ dize{ "NESNE_��E_��ARET��" }, desen{ "^\\.\\*" } },
		belirte�_t�r�{ dize{ "K��EL�_AYRA�_KAPAMA" }, desen{ "^\\]" } },
		belirte�_t�r�{ dize{ "K��EL�_AYRA�_A�MA" }, desen{ "^\\[" } },
		belirte�_t�r�{ dize{ "AYRA�_KAPAMA" }, desen{ "^\\)" } },
		belirte�_t�r�{ dize{ "AYRA�_A�MA" }, desen{ "^\\(" } },
		belirte�_t�r�{ dize{ "SONRA_AZALT" }, desen{ "^--" } },
		belirte�_t�r�{ dize{ "SONRA_ARTTIR" }, desen{ "^\\+\\+" } },
		belirte�_t�r�{ dize{ "KAPSAM" }, desen{ "^::" } },
		belirte�_t�r�{ dize{ "SAYI" }, desen{ "^\\d+" } },
		belirte�_t�r�{ dize{ "KES�R" }, desen{ "^\\d*\\.\\d+" } },
		belirte�_t�r�{ dize{ "D�ZE" }, desen{ "^\"[^\"\\\\\\n]*(?:\\\\.[^\"\\\\\\n]*)*\"" } },
		belirte�_t�r�{ dize{ "KARAKTER" }, desen{ "^'([^'\\\\\\n]|\\\\.)'" } },
		belirte�_t�r�{ dize{ "TANIMLAYICI" }, desen{ "^[a-zA-Z������������_][a-zA-Z������������_\\d]*" } }
	};

	bool yasama(liste<belirte�>& belirte�ler, const liste<dize>& sat�rlar);
}

#endif

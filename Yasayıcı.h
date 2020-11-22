#ifndef YASIYICI
#define YASAYICI

#include "T�rler.h"

namespace bad
{
	enum class belirte�_ailesi : unsigned char
	{
		TANIMLAYICI,
		DE�ER,
		TEK_��LE�,
		��FT_��LE�,
		BEL�RS�Z_��LE�,
		AYRA�_A�AN_��LE�,
		AYRA�_KAPATAN_��LE�,
		G�VDE_BA�I,
		G�VDE_SONU,
		DEME�
	};

	struct belirte�_t�r�
	{
		belirte�_ailesi aile;
		dize ad;
		desen desen;
	};

	struct belirte�
	{
		const belirte�_t�r�& t�r;
		dize beden;
		dize yol;
		int sat�r�;
		int s�tunu;

		belirte�(const belirte�_t�r�& t�r, dize beden, dize yol, int sat�r�, int s�tunu);
	};

	constexpr int T�R_SAYISI = 53;

	const belirte�_t�r� t�rler[T�R_SAYISI] =
	{
		belirte�_t�r�{ belirte�_ailesi::DEME�, dize{ "DEME�" }, desen{ "^;" } },
		belirte�_t�r�{ belirte�_ailesi::G�VDE_SONU, dize{ "G�VDE_SONU" }, desen{ "^\\}" } },
		belirte�_t�r�{ belirte�_ailesi::G�VDE_BA�I, dize{ "G�VDE_BA�I" }, desen{ "^\\{" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "ATAMA" }, desen{ "^=" } },
		belirte�_t�r�{ belirte�_ailesi::BEL�RS�Z_��LE�, dize{ "VE" }, desen{ "^&" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "VEYA" }, desen{ "^\\|" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "YA_DA" }, desen{ "^\\^" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "B�Y�KT�R" }, desen{ "^>" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "K���KT�R" }, desen{ "^<" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "KALAN" }, desen{ "^%" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "B�LME" }, desen{ "^\\/" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "SIRALAMA" }, desen{ "^," } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "NESNE_��E_ER���M" }, desen{ "^\\." } },
		belirte�_t�r�{ belirte�_ailesi::BEL�RS�Z_��LE�, dize{ "KO�ULLU_DE�ER_KAPAMA" }, desen{ "^:" } },
		belirte�_t�r�{ belirte�_ailesi::BEL�RS�Z_��LE�, dize{ "KO�ULLU_DE�ER_A�MA" }, desen{ "^\\?" } },
		belirte�_t�r�{ belirte�_ailesi::BEL�RS�Z_��LE�, dize{ "�ARPMA" }, desen{ "^\\*" } },
		belirte�_t�r�{ belirte�_ailesi::BEL�RS�Z_��LE�, dize{ "�IKARMA" }, desen{ "^-" } },
		belirte�_t�r�{ belirte�_ailesi::BEL�RS�Z_��LE�, dize{ "TOPLAMA" }, desen{ "^\\+" } },
		belirte�_t�r�{ belirte�_ailesi::TEK_��LE�, dize{ "B�TSEL_DE��L" }, desen{ "^~" } },
		belirte�_t�r�{ belirte�_ailesi::TEK_��LE�, dize{ "MANTIKSAL_DE��L" }, desen{ "^!" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "VEYA_ATAMA" }, desen{ "^\\|=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "YA_DA_ATAMA" }, desen{ "^\\^=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "VE_ATAMA" }, desen{ "^&=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "SA�A_KAYAN_ATAMA" }, desen{ "^>>=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "SOLA_KAYAN_ATAMA" }, desen{ "^<<=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "FARK_ATAMA" }, desen{ "^-=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "TOPLAM_ATAMA" }, desen{ "^\\+=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "KALAN_ATAMA" }, desen{ "^%=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "B�L�M_ATAMA" }, desen{ "^\\/=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "�ARPIM_ATAMA" }, desen{ "^\\*=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "AYRILIM" }, desen{ "^\\|\\|" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "B�RLE��M" }, desen{ "^&&" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "E��T_DE��LD�R" }, desen{ "^!=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "E��TT�R" }, desen{ "^==" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "B�Y�KT�R_VEYA_E��TT�R" }, desen{ "^>=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "K���KT�R_VEYA_E��TT�R" }, desen{ "^<=" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "SA�A_KAYDIRMA" }, desen{ "^>>" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "SOLA_KAYDIRMA" }, desen{ "^<<" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "��ARET��_��E_ER���M" }, desen{ "^->" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "��ARET��_��E_��ARET��" }, desen{ "^->\\*" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "NESNE_��E_��ARET��" }, desen{ "^\\.\\*" } },
		belirte�_t�r�{ belirte�_ailesi::AYRA�_KAPATAN_��LE�, dize{ "K��EL�_AYRA�_KAPAMA" }, desen{ "^\\]" } },
		belirte�_t�r�{ belirte�_ailesi::AYRA�_A�AN_��LE�, dize{ "K��EL�_AYRA�_A�MA" }, desen{ "^\\[" } },
		belirte�_t�r�{ belirte�_ailesi::AYRA�_KAPATAN_��LE�, dize{ "AYRA�_KAPAMA" }, desen{ "^\\)" } },
		belirte�_t�r�{ belirte�_ailesi::AYRA�_A�AN_��LE�, dize{ "AYRA�_A�MA" }, desen{ "^\\(" } },
		belirte�_t�r�{ belirte�_ailesi::TEK_��LE�, dize{ "AZALT" }, desen{ "^--" } },
		belirte�_t�r�{ belirte�_ailesi::TEK_��LE�, dize{ "ARTTIR" }, desen{ "^\\+\\+" } },
		belirte�_t�r�{ belirte�_ailesi::��FT_��LE�, dize{ "KAPSAM" }, desen{ "^::" } },
		belirte�_t�r�{ belirte�_ailesi::DE�ER, dize{ "SAYI" }, desen{ "^\\d+" } },
		belirte�_t�r�{ belirte�_ailesi::DE�ER, dize{ "KES�R" }, desen{ "^\\d*\\.\\d+" } },
		belirte�_t�r�{ belirte�_ailesi::DE�ER, dize{ "D�ZE" }, desen{ "^\"[^\"\\\\\\n]*(?:\\\\.[^\"\\\\\\n]*)*\"" } },
		belirte�_t�r�{ belirte�_ailesi::DE�ER, dize{ "KARAKTER" }, desen{ "^'([^'\\\\\\n]|\\\\.)'" } },
		belirte�_t�r�{ belirte�_ailesi::TANIMLAYICI, dize{ "TANIMLAYICI" }, desen{ "^[a-zA-Z������������_][a-zA-Z������������_\\d]*" } }
	};

	struct yasama_sonucu
	{
		const bool dosyaHatas�;
		const dize dosyaYolu;
		const bool hata;
		const int hataSat�r�;
		const int hataS�tunu;
	};

	yasama_sonucu yasama(liste<belirte�>& belirte�ler, const dize& dosyaYolu);
}

#endif

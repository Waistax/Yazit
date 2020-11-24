#ifndef YASIYICI
#define YASAYICI

#include <string>
#include <vector>
#include <regex>

namespace bad
{
	enum class Belirte�T�r� : unsigned int
	{
		DEME�,
		G�VDE_SONU,
		G�VDE_BA�I,
		ATAMA,
		VE,
		VEYA,
		YA_DA,
		B�Y�KT�R,
		K���KT�R,
		KALAN,
		B�LME,
		SIRALAMA,
		NESNE_��E_ER���M,
		KO�ULLU_DE�ER_KAPAMA,
		KO�ULLU_DE�ER_A�MA,
		�ARPMA,
		�IKARMA,
		TOPLAMA,
		B�TSEL_DE��L,
		MANTIKSAL_DE��L,
		VEYA_ATAMA,
		YA_DA_ATAMA,
		VE_ATAMA,
		SA�A_KAYAN_ATAMA,
		SOLA_KAYAN_ATAMA,
		FARK_ATAMA,
		TOPLAM_ATAMA,
		KALAN_ATAMA,
		B�L�M_ATAMA,
		�ARPIM_ATAMA,
		AYRILIM,
		B�RLE��M,
		E��T_DE��LD�R,
		E��TT�R,
		B�Y�KT�R_VEYA_E��TT�R,
		K���KT�R_VEYA_E��TT�R,
		SA�A_KAYDIRMA,
		SOLA_KAYDIRMA,
		��ARET��_��E_ER���M,
		��ARET��_��E_��ARET��,
		NESNE_��E_��ARET��,
		K��EL�_AYRA�_KAPAMA,
		K��EL�_AYRA�_A�MA,
		AYRA�_KAPAMA,
		AYRA�_A�MA,
		AZALT,
		ARTTIR,
		KAPSAM,
		SAYI,
		KES�R,
		D�ZE,
		KARAKTER,
		TANIMLAYICI
	};

	constexpr int T�R_SAYISI = 53;

	const std::string T�R_ADLARI[T�R_SAYISI] =
	{
		"DEME�",
		"G�VDE_SONU",
		"G�VDE_BA�I",
		"ATAMA",
		"VE",
		"VEYA",
		"YA_DA",
		"B�Y�KT�R",
		"K���KT�R",
		"KALAN",
		"B�LME",
		"SIRALAMA",
		"NESNE_��E_ER���M",
		"KO�ULLU_DE�ER_KAPAMA",
		"KO�ULLU_DE�ER_A�MA",
		"�ARPMA",
		"�IKARMA",
		"TOPLAMA",
		"B�TSEL_DE��L",
		"MANTIKSAL_DE��L",
		"VEYA_ATAMA",
		"YA_DA_ATAMA",
		"VE_ATAMA",
		"SA�A_KAYAN_ATAMA",
		"SOLA_KAYAN_ATAMA",
		"FARK_ATAMA",
		"TOPLAM_ATAMA",
		"KALAN_ATAMA",
		"B�L�M_ATAMA",
		"�ARPIM_ATAMA",
		"AYRILIM",
		"B�RLE��M",
		"E��T_DE��LD�R",
		"E��TT�R",
		"B�Y�KT�R_VEYA_E��TT�R",
		"K���KT�R_VEYA_E��TT�R",
		"SA�A_KAYDIRMA",
		"SOLA_KAYDIRMA",
		"��ARET��_��E_ER���M",
		"��ARET��_��E_��ARET��",
		"NESNE_��E_��ARET��",
		"K��EL�_AYRA�_KAPAMA",
		"K��EL�_AYRA�_A�MA",
		"AYRA�_KAPAMA",
		"AYRA�_A�MA",
		"AZALT",
		"ARTTIR",
		"KAPSAM",
		"SAYI",
		"KES�R",
		"D�ZE",
		"KARAKTER",
		"TANIMLAYICI"
	};

	class Belirte�Bi�imi
	{
	public:
		const Belirte�T�r�& t�r;
		const std::regex desen;

		Belirte�Bi�imi(
			const Belirte�T�r�& t�r,
			const std::string& desen)
			:
			t�r(t�r),
			desen(desen)
		{}
	};

	class Belirte�
	{
	public:
		const Belirte�T�r�& t�r;
		const std::string beden;
		const std::string* yol;
		const int sat�r�;
		const int s�tunu;

		Belirte�(
			const Belirte�T�r�& t�r,
			const std::string& beden,
			const std::string* yol,
			const int& sat�r�,
			const int& s�tunu)
			:
			t�r(t�r),
			beden(beden),
			yol(yol),
			sat�r�(sat�r�),
			s�tunu(s�tunu)
		{}
	};

	const Belirte�Bi�imi B���MLER[T�R_SAYISI] =
	{
		Belirte�Bi�imi(Belirte�T�r�::DEME�,					"^;"												),
		Belirte�Bi�imi(Belirte�T�r�::G�VDE_SONU,			"^\\}"												),
		Belirte�Bi�imi(Belirte�T�r�::G�VDE_BA�I,			"^\\{"												),
		Belirte�Bi�imi(Belirte�T�r�::ATAMA,					"^="												),
		Belirte�Bi�imi(Belirte�T�r�::VE,					"^&"												),
		Belirte�Bi�imi(Belirte�T�r�::VEYA,					"^\\|"												),
		Belirte�Bi�imi(Belirte�T�r�::YA_DA,					"^\\^"												),
		Belirte�Bi�imi(Belirte�T�r�::B�Y�KT�R,				"^>"												),
		Belirte�Bi�imi(Belirte�T�r�::K���KT�R,				"^<"												),
		Belirte�Bi�imi(Belirte�T�r�::KALAN,					"^%"												),
		Belirte�Bi�imi(Belirte�T�r�::B�LME,					"^\\/"												),
		Belirte�Bi�imi(Belirte�T�r�::SIRALAMA,				"^,"												),
		Belirte�Bi�imi(Belirte�T�r�::NESNE_��E_ER���M,		"^\\."												),
		Belirte�Bi�imi(Belirte�T�r�::KO�ULLU_DE�ER_KAPAMA,	"^:"												),
		Belirte�Bi�imi(Belirte�T�r�::KO�ULLU_DE�ER_A�MA,	"^\\?"												),
		Belirte�Bi�imi(Belirte�T�r�::�ARPMA,				"^\\*"												),
		Belirte�Bi�imi(Belirte�T�r�::�IKARMA,				"^-"												),
		Belirte�Bi�imi(Belirte�T�r�::TOPLAMA,				"^\\+"												),
		Belirte�Bi�imi(Belirte�T�r�::B�TSEL_DE��L,			"^~"												),
		Belirte�Bi�imi(Belirte�T�r�::MANTIKSAL_DE��L,		"^!"												),
		Belirte�Bi�imi(Belirte�T�r�::VEYA_ATAMA,			"^\\|="												),
		Belirte�Bi�imi(Belirte�T�r�::YA_DA_ATAMA,			"^\\^="												),
		Belirte�Bi�imi(Belirte�T�r�::VE_ATAMA,				"^&="												),
		Belirte�Bi�imi(Belirte�T�r�::SA�A_KAYAN_ATAMA,		"^>>="												),
		Belirte�Bi�imi(Belirte�T�r�::SOLA_KAYAN_ATAMA,		"^<<="												),
		Belirte�Bi�imi(Belirte�T�r�::FARK_ATAMA,			"^-="												),
		Belirte�Bi�imi(Belirte�T�r�::TOPLAM_ATAMA,			"^\\+="												),
		Belirte�Bi�imi(Belirte�T�r�::KALAN_ATAMA,			"^%="												),
		Belirte�Bi�imi(Belirte�T�r�::B�L�M_ATAMA,			"^\\/="												),
		Belirte�Bi�imi(Belirte�T�r�::�ARPIM_ATAMA,			"^\\*="												),
		Belirte�Bi�imi(Belirte�T�r�::AYRILIM,				"^\\|\\|"											),
		Belirte�Bi�imi(Belirte�T�r�::B�RLE��M,				"^&&"												),
		Belirte�Bi�imi(Belirte�T�r�::E��T_DE��LD�R,			"^!="												),
		Belirte�Bi�imi(Belirte�T�r�::E��TT�R,				"^=="												),
		Belirte�Bi�imi(Belirte�T�r�::B�Y�KT�R_VEYA_E��TT�R,	"^>="												),
		Belirte�Bi�imi(Belirte�T�r�::K���KT�R_VEYA_E��TT�R,	"^<="												),
		Belirte�Bi�imi(Belirte�T�r�::SA�A_KAYDIRMA,			"^>>"												),
		Belirte�Bi�imi(Belirte�T�r�::SOLA_KAYDIRMA,			"^<<"												),
		Belirte�Bi�imi(Belirte�T�r�::��ARET��_��E_ER���M,	"^->"												),
		Belirte�Bi�imi(Belirte�T�r�::��ARET��_��E_��ARET��,	"^->\\*"											),
		Belirte�Bi�imi(Belirte�T�r�::NESNE_��E_��ARET��,	"^\\.\\*"											),
		Belirte�Bi�imi(Belirte�T�r�::K��EL�_AYRA�_KAPAMA,	"^\\]"												),
		Belirte�Bi�imi(Belirte�T�r�::K��EL�_AYRA�_A�MA,		"^\\["												),
		Belirte�Bi�imi(Belirte�T�r�::AYRA�_KAPAMA,			"^\\)"												),
		Belirte�Bi�imi(Belirte�T�r�::AYRA�_A�MA,			"^\\("												),
		Belirte�Bi�imi(Belirte�T�r�::AZALT,					"^--"												),
		Belirte�Bi�imi(Belirte�T�r�::ARTTIR,				"^\\+\\+"											),
		Belirte�Bi�imi(Belirte�T�r�::KAPSAM,				"^::"												),
		Belirte�Bi�imi(Belirte�T�r�::SAYI,					"^\\d+"												),
		Belirte�Bi�imi(Belirte�T�r�::KES�R,					"^\\d*\\.\\d+"										),
		Belirte�Bi�imi(Belirte�T�r�::D�ZE,					"^\"[^\"\\\\\\n]*(?:\\\\.[^\"\\\\\\n]*)*\""			),
		Belirte�Bi�imi(Belirte�T�r�::KARAKTER,				"^'([^'\\\\\\n]|\\\\.)'"							),
		Belirte�Bi�imi(Belirte�T�r�::TANIMLAYICI,			"^[a-zA-Z������������_][a-zA-Z������������_\\d]*"	)
	};

	class YasamaSonucu
	{
	public:
		const bool dosyaHatas�;
		const std::string* dosyaYolu;
		const bool hata;
		const int sonSat�r;
		const int sonS�tun;

		YasamaSonucu(
			const bool& dosyaHatas�,
			const std::string* dosyaYolu,
			const bool& hata,
			const int& sonSat�r,
			const int& sonS�tun)
			:
			dosyaHatas�(dosyaHatas�),
			dosyaYolu(dosyaYolu),
			hata(hata),
			sonSat�r(sonSat�r),
			sonS�tun(sonS�tun)
		{}
	};

	YasamaSonucu yasama(std::vector<const Belirte�*>& belirte�ler, const std::string* dosyaYolu);
}

#endif

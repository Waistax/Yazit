#ifndef YASIYICI
#define YASAYICI

#include <string>
#include <vector>
#include <regex>

namespace bad
{
	enum class BelirteçTürü : unsigned int
	{
		DEMEÇ,
		GÖVDE_SONU,
		GÖVDE_BAŞI,
		ATAMA,
		VE,
		VEYA,
		YA_DA,
		BÜYÜKTÜR,
		KÜÇÜKTÜR,
		KALAN,
		BÖLME,
		SIRALAMA,
		NESNE_ÖĞE_ERİŞİM,
		KOŞULLU_DEĞER_KAPAMA,
		KOŞULLU_DEĞER_AÇMA,
		ÇARPMA,
		ÇIKARMA,
		TOPLAMA,
		BİTSEL_DEĞİL,
		MANTIKSAL_DEĞİL,
		VEYA_ATAMA,
		YA_DA_ATAMA,
		VE_ATAMA,
		SAĞA_KAYAN_ATAMA,
		SOLA_KAYAN_ATAMA,
		FARK_ATAMA,
		TOPLAM_ATAMA,
		KALAN_ATAMA,
		BÖLÜM_ATAMA,
		ÇARPIM_ATAMA,
		AYRILIM,
		BİRLEŞİM,
		EŞİT_DEĞİLDİR,
		EŞİTTİR,
		BÜYÜKTÜR_VEYA_EŞİTTİR,
		KÜÇÜKTÜR_VEYA_EŞİTTİR,
		SAĞA_KAYDIRMA,
		SOLA_KAYDIRMA,
		İŞARETÇİ_ÖĞE_ERİŞİM,
		İŞARETÇİ_ÖĞE_İŞARETÇİ,
		NESNE_ÖĞE_İŞARETÇİ,
		KÖŞELİ_AYRAÇ_KAPAMA,
		KÖŞELİ_AYRAÇ_AÇMA,
		AYRAÇ_KAPAMA,
		AYRAÇ_AÇMA,
		AZALT,
		ARTTIR,
		KAPSAM,
		SAYI,
		KESİR,
		DİZE,
		KARAKTER,
		TANIMLAYICI
	};

	constexpr int TÜR_SAYISI = 53;

	const std::string TÜR_ADLARI[TÜR_SAYISI] =
	{
		"DEMEÇ",
		"GÖVDE_SONU",
		"GÖVDE_BAŞI",
		"ATAMA",
		"VE",
		"VEYA",
		"YA_DA",
		"BÜYÜKTÜR",
		"KÜÇÜKTÜR",
		"KALAN",
		"BÖLME",
		"SIRALAMA",
		"NESNE_ÖĞE_ERİŞİM",
		"KOŞULLU_DEĞER_KAPAMA",
		"KOŞULLU_DEĞER_AÇMA",
		"ÇARPMA",
		"ÇIKARMA",
		"TOPLAMA",
		"BİTSEL_DEĞİL",
		"MANTIKSAL_DEĞİL",
		"VEYA_ATAMA",
		"YA_DA_ATAMA",
		"VE_ATAMA",
		"SAĞA_KAYAN_ATAMA",
		"SOLA_KAYAN_ATAMA",
		"FARK_ATAMA",
		"TOPLAM_ATAMA",
		"KALAN_ATAMA",
		"BÖLÜM_ATAMA",
		"ÇARPIM_ATAMA",
		"AYRILIM",
		"BİRLEŞİM",
		"EŞİT_DEĞİLDİR",
		"EŞİTTİR",
		"BÜYÜKTÜR_VEYA_EŞİTTİR",
		"KÜÇÜKTÜR_VEYA_EŞİTTİR",
		"SAĞA_KAYDIRMA",
		"SOLA_KAYDIRMA",
		"İŞARETÇİ_ÖĞE_ERİŞİM",
		"İŞARETÇİ_ÖĞE_İŞARETÇİ",
		"NESNE_ÖĞE_İŞARETÇİ",
		"KÖŞELİ_AYRAÇ_KAPAMA",
		"KÖŞELİ_AYRAÇ_AÇMA",
		"AYRAÇ_KAPAMA",
		"AYRAÇ_AÇMA",
		"AZALT",
		"ARTTIR",
		"KAPSAM",
		"SAYI",
		"KESİR",
		"DİZE",
		"KARAKTER",
		"TANIMLAYICI"
	};

	class BelirteçBiçimi
	{
	public:
		const BelirteçTürü& tür;
		const std::regex desen;

		BelirteçBiçimi(
			const BelirteçTürü& tür,
			const std::string& desen)
			:
			tür(tür),
			desen(desen)
		{}
	};

	class Belirteç
	{
	public:
		const BelirteçTürü& tür;
		const std::string beden;
		const std::string* yol;
		const int satırı;
		const int sütunu;

		Belirteç(
			const BelirteçTürü& tür,
			const std::string& beden,
			const std::string* yol,
			const int& satırı,
			const int& sütunu)
			:
			tür(tür),
			beden(beden),
			yol(yol),
			satırı(satırı),
			sütunu(sütunu)
		{}
	};

	const BelirteçBiçimi BİÇİMLER[TÜR_SAYISI] =
	{
		BelirteçBiçimi(BelirteçTürü::DEMEÇ,					"^;"												),
		BelirteçBiçimi(BelirteçTürü::GÖVDE_SONU,			"^\\}"												),
		BelirteçBiçimi(BelirteçTürü::GÖVDE_BAŞI,			"^\\{"												),
		BelirteçBiçimi(BelirteçTürü::ATAMA,					"^="												),
		BelirteçBiçimi(BelirteçTürü::VE,					"^&"												),
		BelirteçBiçimi(BelirteçTürü::VEYA,					"^\\|"												),
		BelirteçBiçimi(BelirteçTürü::YA_DA,					"^\\^"												),
		BelirteçBiçimi(BelirteçTürü::BÜYÜKTÜR,				"^>"												),
		BelirteçBiçimi(BelirteçTürü::KÜÇÜKTÜR,				"^<"												),
		BelirteçBiçimi(BelirteçTürü::KALAN,					"^%"												),
		BelirteçBiçimi(BelirteçTürü::BÖLME,					"^\\/"												),
		BelirteçBiçimi(BelirteçTürü::SIRALAMA,				"^,"												),
		BelirteçBiçimi(BelirteçTürü::NESNE_ÖĞE_ERİŞİM,		"^\\."												),
		BelirteçBiçimi(BelirteçTürü::KOŞULLU_DEĞER_KAPAMA,	"^:"												),
		BelirteçBiçimi(BelirteçTürü::KOŞULLU_DEĞER_AÇMA,	"^\\?"												),
		BelirteçBiçimi(BelirteçTürü::ÇARPMA,				"^\\*"												),
		BelirteçBiçimi(BelirteçTürü::ÇIKARMA,				"^-"												),
		BelirteçBiçimi(BelirteçTürü::TOPLAMA,				"^\\+"												),
		BelirteçBiçimi(BelirteçTürü::BİTSEL_DEĞİL,			"^~"												),
		BelirteçBiçimi(BelirteçTürü::MANTIKSAL_DEĞİL,		"^!"												),
		BelirteçBiçimi(BelirteçTürü::VEYA_ATAMA,			"^\\|="												),
		BelirteçBiçimi(BelirteçTürü::YA_DA_ATAMA,			"^\\^="												),
		BelirteçBiçimi(BelirteçTürü::VE_ATAMA,				"^&="												),
		BelirteçBiçimi(BelirteçTürü::SAĞA_KAYAN_ATAMA,		"^>>="												),
		BelirteçBiçimi(BelirteçTürü::SOLA_KAYAN_ATAMA,		"^<<="												),
		BelirteçBiçimi(BelirteçTürü::FARK_ATAMA,			"^-="												),
		BelirteçBiçimi(BelirteçTürü::TOPLAM_ATAMA,			"^\\+="												),
		BelirteçBiçimi(BelirteçTürü::KALAN_ATAMA,			"^%="												),
		BelirteçBiçimi(BelirteçTürü::BÖLÜM_ATAMA,			"^\\/="												),
		BelirteçBiçimi(BelirteçTürü::ÇARPIM_ATAMA,			"^\\*="												),
		BelirteçBiçimi(BelirteçTürü::AYRILIM,				"^\\|\\|"											),
		BelirteçBiçimi(BelirteçTürü::BİRLEŞİM,				"^&&"												),
		BelirteçBiçimi(BelirteçTürü::EŞİT_DEĞİLDİR,			"^!="												),
		BelirteçBiçimi(BelirteçTürü::EŞİTTİR,				"^=="												),
		BelirteçBiçimi(BelirteçTürü::BÜYÜKTÜR_VEYA_EŞİTTİR,	"^>="												),
		BelirteçBiçimi(BelirteçTürü::KÜÇÜKTÜR_VEYA_EŞİTTİR,	"^<="												),
		BelirteçBiçimi(BelirteçTürü::SAĞA_KAYDIRMA,			"^>>"												),
		BelirteçBiçimi(BelirteçTürü::SOLA_KAYDIRMA,			"^<<"												),
		BelirteçBiçimi(BelirteçTürü::İŞARETÇİ_ÖĞE_ERİŞİM,	"^->"												),
		BelirteçBiçimi(BelirteçTürü::İŞARETÇİ_ÖĞE_İŞARETÇİ,	"^->\\*"											),
		BelirteçBiçimi(BelirteçTürü::NESNE_ÖĞE_İŞARETÇİ,	"^\\.\\*"											),
		BelirteçBiçimi(BelirteçTürü::KÖŞELİ_AYRAÇ_KAPAMA,	"^\\]"												),
		BelirteçBiçimi(BelirteçTürü::KÖŞELİ_AYRAÇ_AÇMA,		"^\\["												),
		BelirteçBiçimi(BelirteçTürü::AYRAÇ_KAPAMA,			"^\\)"												),
		BelirteçBiçimi(BelirteçTürü::AYRAÇ_AÇMA,			"^\\("												),
		BelirteçBiçimi(BelirteçTürü::AZALT,					"^--"												),
		BelirteçBiçimi(BelirteçTürü::ARTTIR,				"^\\+\\+"											),
		BelirteçBiçimi(BelirteçTürü::KAPSAM,				"^::"												),
		BelirteçBiçimi(BelirteçTürü::SAYI,					"^\\d+"												),
		BelirteçBiçimi(BelirteçTürü::KESİR,					"^\\d*\\.\\d+"										),
		BelirteçBiçimi(BelirteçTürü::DİZE,					"^\"[^\"\\\\\\n]*(?:\\\\.[^\"\\\\\\n]*)*\""			),
		BelirteçBiçimi(BelirteçTürü::KARAKTER,				"^'([^'\\\\\\n]|\\\\.)'"							),
		BelirteçBiçimi(BelirteçTürü::TANIMLAYICI,			"^[a-zA-ZÇĞİÖŞÜçğıöşü_][a-zA-ZÇĞİÖŞÜçğıöşü_\\d]*"	)
	};

	class YasamaSonucu
	{
	public:
		const bool dosyaHatası;
		const std::string* dosyaYolu;
		const bool hata;
		const int sonSatır;
		const int sonSütun;

		YasamaSonucu(
			const bool& dosyaHatası,
			const std::string* dosyaYolu,
			const bool& hata,
			const int& sonSatır,
			const int& sonSütun)
			:
			dosyaHatası(dosyaHatası),
			dosyaYolu(dosyaYolu),
			hata(hata),
			sonSatır(sonSatır),
			sonSütun(sonSütun)
		{}
	};

	YasamaSonucu yasama(std::vector<const Belirteç*>& belirteçler, const std::string* dosyaYolu);
}

#endif

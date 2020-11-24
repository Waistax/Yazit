#ifndef SSA_NESNESÝ
#define SSA_NESNESÝ

#include "Türler.h"

namespace bad
{
	class SSANesnesi
	{
	public:
		virtual ~SSANesnesi() = 0;
	};

	// Soyut Sözdizimi Aðacý Kaynak Nesnesi
	class SSAKaynakNesnesi;
	class KaynakDosyasý;
	class KaynakKonumu;
	class DerlemeBirimi;
	class KaynakDosyasýGönderimi;

	// Soyut Sözdizimi Aðacý Anlam Nesnesi
	class SSAAnlamNesnesi;
	class Tasarý;
	class Kapsam;
	class ÝþlevKapsamý;
	class BütünKapsamý;
	class GövdeKapsamý;
	class YazýlýmKapsamý;
	class KüreselKapsam;

	// Soyut Sözdizimi Aðacý Sözdimizi Nesnesi
	class SSASözdizimiNesnesi;
	class ÖniþleyiciUnsuru;
	class TanýmNesnesi;
	class Tür;
	class Deyim;
	class Demeç;
	class ÝkincilSözdizimiNesnesi;
	class Boyut;
	class Ad;
	class DüðmeDurumu;
	class YakalamaGövdesi;
	class TekliÝþleç;
	class ÝkiliÝþleç;
	class SaklamaBelirlemesi;
	class SanalBelirlemesi;
	class EriþimÇeþidi;
	class EdimselEtken;
	class ÝþlevÖðeNiceleyicileri;
	class Köken;
	class ÖðeNesnesi;
	class BildirimVeyaTaným;
	class TürTanýmý;
	class AdUzayýTanýmý;
	class EtiketTanýmý;
	class TürBildirimi;
	class Taným;
	class Bildirim;
	class ÝþlevTanýmý;
	class GirdiTanýmý;
	class VeriTanýmý;
	class SýralamaHazýrBilgisiTanýmý;
	class ÝþlevBildirimi;
	class DeðiþkenBildirimi;
	class BiçimselEtkenBildirimi;
	class Dýþsal;
	class ÝþlevSürekli;
	class DosyaYereli;
	class SýnýfBaþýnaÖðe;
	class TanýmYok;
	class Sanal;
	class DeðiþkenTanýmý;
	class BiçimselEtkenTanýmý;
	class BitAlanýTanýmý;
	class AdlýTürTanýmý;
	class BütünTürüTanýmý;
	class SýralamaTürüTanýmý;
	class BütünTürüBildirimi;
	class SýralamaTürüBildirimi;
	class ÝçermeBirimi;
	class MakroÇaðrýsý;
	class MakroTanýmý;
	class Yorum;
	class ÝþlevTürü;
	class VeriTürü;
	class EtiketTürü;
	class AdUzayýTürü;
	class TürGönderimi;
	class ÝlkelTür;
	class SýralamaTürü;
	class KurulmuþTür;
	class BütünTürü;
	class KuraldýþýTür;
	class BiçimselEtkenTürü;
	class AdlýTür;
	class SayýTürü;
	class Hiçlik;
	class Mantýk;
	class TümlevTürü;
	class GerçekTürü;
	class Bayt;
	class Karakter;
	class KýsaTamsayý;
	class Tamsayý;
	class UzunTamsayý;
	class Gerçek;
	class Çift;
	class UzunÇift;
	class TopluTür;
	class ÝþaretçiTürü;
	class GönderimTürü;
	class AralýkTürü;
	class DiziTürü;
	class YapýTürü;
	class BirleþmeTürü;
	class SýnýfTürü;
	class DipnotTürü;
	class DeðerdenBiçimselEtkenTürü;
	class GönderimdenBiçimselEtkenTürü;
	class Açýk;
	class Korumalý;
	class Özel;
	class AdlýTürGönderimi;
	class AdsýzTürGönderimi;
	class DeyimDemeci;
	class AtlamaDemeci;
	class KýrmaDemeci;
	class SürmeDemeci;
	class EtiketliDemeç;
	class GövdeDemeci;
	class BoþDemeç;
	class ÝseDemeci;
	class DüðmeDemeci;
	class DöndermeDemeci;
	class DöngüDemeci;
	class DenemeDemeci;
	class BildirimVeyaTanýmDemeci;
	class AtmaDemeci;
	class SilmeDemeci;
	class BitirmeDemeci;
	class DurumGövdesi;
	class VarsayýlanGövde;
	class ÝkenDemeci;
	class YapYoklaDemeci;
	class ÝçinDemeci;
	class ÝçinÖnceYoklaDemeci;
	class ÝçinSonraYoklaDemeci;
	class TürYakalamaGövdesi;
	class DeðiþkenYakalamaGövdesi;
	class HazýrBilgi;
	class DökümDeyimi;
	class BütünDeyimi;
	class TekliDeyim;
	class ÝkiliDeyim;
	class KoþulluDeyim;
	class ArlýkDeyimi;
	class ÝþlevÇaðrýsýDeyimi;
	class YeniDeyimi;
	class AdGönderimi;
	class EtiketEriþimi;
	class DiziEriþimi;
	class DipnotDeyimi;
	class TopluDeyim;
	class TanýmlayýcýGönderimi;
	class NitelikliTanýmlayýcýGönderimi;
	class TürNitelikliTanýmlayýcýGönderimi;
	class ÝþaretçiÜzerindenNitelikli;
	class VeriÜzerindenNitelikli;
	class TamsayýHazýrBilgisi;
	class DizeHazýrBilgisi;
	class KarakterHazýrBilgisi;
	class GerçekHazýrBilgisi;
	class MantýkHazýrBilgisi;
	class BitHazýrBilgisi;
	class SýralamaHazýrBilgisi;
	class TekliArtý;
	class TekliEksi;
	class Deðil;
	class BitselDeðil;
	class Gönderim;
	class Alým;
	class Arttýrma;
	class Azaltma;
	class SonraArttýrma;
	class SonraAzaltma;
	class Toplama;
	class Çýkarma;
	class Çarpma;
	class Bölme;
	class Kalan;
	class Üs;
	class Ve;
	class Veya;
	class Eþittir;
	class EþitDeðildir;
	class Büyüktür;
	class BüyükDeðildir;
	class Küçüktür;
	class KüçükDeðildir;
	class BitselVe;
	class BitselVeya;
	class BitselYaDa;
	class BitselSolaKaydýrma;
	class BitselSaðaKaydýrma;
	class Atama;
	class ÝþleçliAtama;
	class EdimselEtkenDeyimi;
	class KayýpEdimselEtken;
	class DeðerdenBiçimselEtkenDeyimi;
	class GönderimdenBiçimselEtkenDeyimi;

	// Soyut Sözdizimi Aðacý Anlamsal Nesnesi
	class SSAAnlamNesnesi : public SSANesnesi
	{
	public:
		virtual ~SSAAnlamNesnesi() = 0;
	};

	class Kapsam : public SSAAnlamNesnesi
	{
	public:
		liste<TanýmNesnesi> tanýmNesneleri;
		liste<Kapsam> altKapsamlar;

		Kapsam()
			:
			tanýmNesneleri{},
			altKapsamlar{}
		{}
	};

	// BELKÝ SIRALA
	class ÝþlevKapsamý : public Kapsam
	{};

	class BütünKapsamý : public Kapsam
	{};

	class GövdeKapsamý : public Kapsam
	{};

	class YazýlýmKapsamý : public Kapsam
	{};

	class KüreselKapsam : public Kapsam
	{};

	class Tasarý : public SSAAnlamNesnesi
	{
	public:
		KüreselKapsam dýþKapsam;
		liste<DerlemeBirimi> dosyalar;

		Tasarý()
			:
			dýþKapsam{},
			dosyalar{}
		{}
	};

	// Soyut Sözdizimi Aðacý Kaynak Nesnesi
	class SSAKaynakNesnesi : public SSANesnesi
	{
	public:
		virtual ~SSAKaynakNesnesi() = 0;
	};

	class KaynakDosyasý : public SSAKaynakNesnesi
	{
	public:
		dize yolu;

		KaynakDosyasý(
			const dize& yol)
			:
			yolu{ yol }
		{}
	};

	class KaynakKonumu : public SSAKaynakNesnesi
	{
	public:
		int baþlangýçSatýrý;
		int baþlangýçSütunu;
		int bitiþSatýrý;
		int bitiþSütunu;
		paiþ<KaynakDosyasý> bulunduðuDosya;

		KaynakKonumu(
			const int& baþlangýçSatýrý,
			const int& baþlangýçSütunu,
			const int& bitiþSatýrý,
			const int& bitiþSütunu,
			const paiþ<KaynakDosyasý>& bulunduðuDosya)
			:
			baþlangýçSatýrý{ baþlangýçSatýrý },
			baþlangýçSütunu{ baþlangýçSütunu },
			bitiþSatýrý{ bitiþSatýrý },
			bitiþSütunu{ bitiþSütunu },
			bulunduðuDosya{ bulunduðuDosya }
		{}
	};

	class DerlemeBirimi : public KaynakDosyasý
	{
	public:
		paiþ<dize> dili;
		liste<TanýmNesnesi> parçalarý;
		YazýlýmKapsamý açtýðýKapsam;

		DerlemeBirimi(
			const dize& yol,
			const paiþ<dize>& dili)
			:
			KaynakDosyasý{ yol },
			dili{ dili },
			parçalarý{},
			açtýðýKapsam{}
		{}
	};

	// BUNA DAHA SONRA BAK!!!
	class KaynakDosyasýGönderimi : public KaynakDosyasý
	{
	public:
		KaynakKonumu konumBilgisi;
		paiþ<KaynakDosyasý> gönderdiðiDosya;

		KaynakDosyasýGönderimi(
			const dize& yol,
			const KaynakKonumu& konumBilgisi,
			const paiþ<KaynakDosyasý>& gönderdiðiDosya)
			:
			KaynakDosyasý{ yol },
			konumBilgisi{ konumBilgisi },
			gönderdiðiDosya{ gönderdiðiDosya }
		{}
	};

	// Soyut Sözdizimi Aðacý Sözdizimi Nesnesi
	class SSASözdizimiNesnesi : public SSANesnesi
	{
	public:
		KaynakKonumu konumBilgisi;
		liste<ÖniþleyiciUnsuru> öniþleyiciUnsurlarý;
		liste<DipnotDeyimi> dipnotlar;

		SSASözdizimiNesnesi(
			const KaynakKonumu& konumBilgisi)
			:
			konumBilgisi{ konumBilgisi },
			öniþleyiciUnsurlarý{},
			dipnotlar{}
		{}
	};

	class ÖniþleyiciUnsuru : public SSASözdizimiNesnesi
	{
	public:
		ÖniþleyiciUnsuru(
			const KaynakKonumu& konumBilgisi)
			:
			SSASözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class TanýmNesnesi : public SSASözdizimiNesnesi
	{
	public:
		TanýmNesnesi(
			const KaynakKonumu& konumBilgisi)
			:
			SSASözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class Tür : public SSASözdizimiNesnesi
	{
	public:
		bool sabitMi;

		Tür(
			const KaynakKonumu& konumBilgisi,
			const bool& sabitMi)
			:
			SSASözdizimiNesnesi{ konumBilgisi },
			sabitMi{ sabitMi }
		{}
	};

	class ÝþlevTürü : public Tür
	{
	public:
		TürGönderimi* dönderdiðiTür;
		liste<BiçimselEtkenTürü> etkenleri;
	};

	class VeriTürü : public Tür
	{};

	class EtiketTürü : public Tür
	{};

	class AdUzayýTürü : public Tür
	{};

	class TürGönderimi : public Tür
	{};

	class ÝlkelTür : public VeriTürü
	{};

	class SýralamaTürü : public VeriTürü
	{
	public:
		liste<SýralamaHazýrBilgisiTanýmý> sýralamaHazýrBilgileri;
	};

	class KurulmuþTür : public VeriTürü
	{
	public:
		TürGönderimi* temelTürü;
	};

	class BütünTürü : public VeriTürü
	{
	public:
		liste<ÖðeNesnesi> öðeleri;
		BütünKapsamý* açtýðýKapsam;
	};

	class KuraldýþýTür : public VeriTürü
	{};

	class BiçimselEtkenTürü : public VeriTürü
	{
	public:
		TürGönderimi* türü;
	};

	class AdlýTür : public VeriTürü
	{
	public:
		Tür* gövdesi;
	};

	class SayýTürü : public ÝlkelTür
	{
	public:
		bool iþaretliMi;
	};

	class Hiçlik : public ÝlkelTür
	{};

	class Mantýk : public ÝlkelTür
	{};

	class TümlevTürü : public SayýTürü
	{
	public:
		int geniþliði;
	};

	class GerçekTürü : public SayýTürü
	{
	public:
		int keskinliði;
	};

	class Bayt : public SayýTürü
	{};

	class Karakter : public SayýTürü
	{};

	class KýsaTamsayý : public TümlevTürü
	{};

	class Tamsayý : public TümlevTürü
	{};

	class UzunTamsayý : public TümlevTürü
	{};

	class Gerçek : public GerçekTürü
	{};

	class Çift : public GerçekTürü
	{};

	class UzunÇift : public GerçekTürü
	{};

	class TopluTür : public KurulmuþTür
	{};

	class ÝþaretçiTürü : public KurulmuþTür
	{
	public:
		int geniþliði;
	};

	class GönderimTürü : public KurulmuþTür
	{};

	class AralýkTürü : public KurulmuþTür
	{};

	class DiziTürü : public KurulmuþTür
	{
	public:
		liste<Boyut> dereceleri;
	};

	class YapýTürü : public BütünTürü
	{};

	class BirleþmeTürü : public BütünTürü
	{};

	class SýnýfTürü : public BütünTürü
	{
	public:
		liste<Köken> kökeni;
	};

	class DipnotTürü : public BütünTürü
	{};

	class DeðerdenBiçimselEtkenTürü : public BiçimselEtkenTürü
	{};

	class GönderimdenBiçimselEtkenTürü : public BiçimselEtkenTürü
	{};

	class Deyim : public SSASözdizimiNesnesi
	{
	public:
		paiþ<TürGönderimi> deyimTürü;

		Deyim(
			const KaynakKonumu& konumBilgisi,
			const paiþ<TürGönderimi>& deyimTürü)
			:
			SSASözdizimiNesnesi{ konumBilgisi },
			deyimTürü{ deyimTürü }
		{}
	};

	class Demeç : public SSASözdizimiNesnesi
	{
	public:
		Demeç(
			const KaynakKonumu& konumBilgisi)
			:
			SSASözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class ÝkincilSözdizimiNesnesi : public SSASözdizimiNesnesi
	{
	public:
		ÝkincilSözdizimiNesnesi(
			const KaynakKonumu& konumBilgisi)
			:
			SSASözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class Boyut : public ÝkincilSözdizimiNesnesi
	{
	public:
		Deyim altSýnýrý;
		Deyim üstSýnýrý;

		Boyut(
			const KaynakKonumu& konumBilgisi,
			const Deyim& altSýnýrý,
			const Deyim& üstSýnýrý)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			altSýnýrý{ altSýnýrý },
			üstSýnýrý{ üstSýnýrý }
		{}
	};

	class Ad : public ÝkincilSözdizimiNesnesi
	{
	public:
		dize adDizesi;

		Ad(
			const KaynakKonumu& konumBilgisi,
			const dize& adDizesi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			adDizesi{ adDizesi }
		{}
	};

	class DüðmeDurumu : public ÝkincilSözdizimiNesnesi
	{
	public:
		bool bütünDurumlarýDeðerlendirMi;
		liste<Demeç> gövdesi;

		DüðmeDurumu(
			const KaynakKonumu& konumBilgisi,
			const bool& bütünDurumlarýDeðerlendirMi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			bütünDurumlarýDeðerlendirMi{ bütünDurumlarýDeðerlendirMi },
			gövdesi{}
		{}
	};

	class YakalamaGövdesi : public ÝkincilSözdizimiNesnesi
	{
	public:
		Demeç gövdesi;

		YakalamaGövdesi(
			const KaynakKonumu& konumBilgisi,
			const Demeç& gövdesi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			gövdesi{ gövdesi }
		{}
	};

	class TekliÝþleç : public ÝkincilSözdizimiNesnesi
	{
	public:
		TekliÝþleç(
			const KaynakKonumu& konumBilgisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class ÝkiliÝþleç : public ÝkincilSözdizimiNesnesi
	{
	public:
		ÝkiliÝþleç(
			const KaynakKonumu& konumBilgisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class SaklamaBelirlemesi : public ÝkincilSözdizimiNesnesi
	{
	public:
		SaklamaBelirlemesi(
			const KaynakKonumu& konumBilgisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class SanalBelirlemesi : public ÝkincilSözdizimiNesnesi
	{
	public:
		SanalBelirlemesi(
			const KaynakKonumu& konumBilgisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class EriþimÇeþidi : public ÝkincilSözdizimiNesnesi
	{
	public:
		EriþimÇeþidi(
			const KaynakKonumu& konumBilgisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class EdimselEtken : public ÝkincilSözdizimiNesnesi
	{
	public:
		EdimselEtken(
			const KaynakKonumu& konumBilgisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi }
		{}
	};

	class ÝþlevÖðeNiceleyicileri : public ÝkincilSözdizimiNesnesi
	{
	public:
		bool arkadaþMý;
		bool satýrÝçiMi;
		bool buSabitMi;
		SanalBelirlemesi sanalBelirleyicisi;

		ÝþlevÖðeNiceleyicileri(
			const KaynakKonumu& konumBilgisi,
			const bool& arkadaþMý,
			const bool& satýrÝçiMi,
			const bool& buSabitMi,
			SanalBelirlemesi& sanalBelirleyicisi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			arkadaþMý{ arkadaþMý },
			satýrÝçiMi{ satýrÝçiMi },
			buSabitMi{ buSabitMi },
			sanalBelirleyicisi{ sanalBelirleyicisi }
		{}
	};

	class Köken : public ÝkincilSözdizimiNesnesi
	{
	public:
		SanalBelirlemesi sanalBelirleyici;
		EriþimÇeþidi eriþimÇeþidi;
		liste<AdlýTürGönderimi> sýnýfAdý;

		Köken(
			const KaynakKonumu& konumBilgisi,
			const SanalBelirlemesi& sanalBelirleyici,
			const EriþimÇeþidi& eriþimÇeþidi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			sanalBelirleyici{ sanalBelirleyici },
			eriþimÇeþidi{ eriþimÇeþidi },
			sýnýfAdý{}
		{}
	};

	class ÖðeNesnesi : public ÝkincilSözdizimiNesnesi
	{
	public:
		int kaçýklýðý;
		TanýmNesnesi öðesi;

		ÖðeNesnesi(
			const KaynakKonumu& konumBilgisi,
			const int& kaçýklýðý,
			const TanýmNesnesi& öðesi)
			:
			ÝkincilSözdizimiNesnesi{ konumBilgisi },
			kaçýklýðý{ kaçýklýðý },
			öðesi{ öðesi }
		{}
	};

	class BildirimVeyaTaným : public TanýmNesnesi
	{
	public:
		SaklamaBelirlemesi saklamaBelirleyicisi;
		EriþimÇeþidi eriþimÇeþidi;
		dize baðlamaBelirleyicisi;

		BildirimVeyaTaným(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi)
			:
			TanýmNesnesi{ konumBilgisi },
			saklamaBelirleyicisi{ saklamaBelirleyicisi },
			eriþimÇeþidi{ eriþimÇeþidi },
			baðlamaBelirleyicisi{ baðlamaBelirleyicisi }
		{}
	};

	class TürTanýmý : public TanýmNesnesi
	{
	public:
		Ad türAdý;

		TürTanýmý(
			const KaynakKonumu& konumBilgisi,
			const Ad& türAdý)
			:
			TanýmNesnesi{ konumBilgisi },
			türAdý{ türAdý }
		{}
	};

	class AdUzayýTanýmý : public TanýmNesnesi
	{
	public:
		Ad adUzayý;
		liste<TanýmNesnesi> gövdesi;
		AdUzayýTürü adUzayýTürü;

		AdUzayýTanýmý(
			const KaynakKonumu& konumBilgisi,
			const Ad& adUzayý,
			const AdUzayýTürü& adUzayýTürü)
			:
			TanýmNesnesi{ konumBilgisi },
			adUzayý{ adUzayý },
			gövdesi{},
			adUzayýTürü{ adUzayýTürü }
		{}
	};

	class EtiketTanýmý : public TanýmNesnesi
	{
	public:
		Ad etiketAdý;
		EtiketTürü etiketTürü;

		EtiketTanýmý(
			const KaynakKonumu& konumBilgisi,
			const Ad& etiketAdý,
			const EtiketTürü& etiketTürü)
			:
			TanýmNesnesi{ konumBilgisi },
			etiketAdý{ etiketAdý },
			etiketTürü{ etiketTürü }
		{}
	};

	class TürBildirimi : public TanýmNesnesi
	{
	public:
		TürGönderimi türGönderimi;

		TürBildirimi(
			const KaynakKonumu& konumBilgisi,
			const TürGönderimi& türGönderimi)
			:
			TanýmNesnesi{ konumBilgisi },
			türGönderimi{ türGönderimi }
		{}
	};

	class Taným : public BildirimVeyaTaným
	{
	public:
		Ad tanýmlayýcýAdý;
		TürGönderimi tanýmTürü;

		Taným(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü)
			:
			BildirimVeyaTaným{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi },
			tanýmlayýcýAdý{ tanýmlayýcýAdý },
			tanýmTürü{ tanýmTürü }
		{}
	};

	class Bildirim : public BildirimVeyaTaným
	{
	public:
		Taným tanýmGönderimi;
		Ad tanýmlayýcýAdý;
		TürGönderimi bildirimTürü;

		Bildirim(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Taným& tanýmGönderimi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& bildirimTürü)
			:
			BildirimVeyaTaným{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi },
			tanýmGönderimi{ tanýmGönderimi },
			tanýmlayýcýAdý{ tanýmlayýcýAdý },
			bildirimTürü{ bildirimTürü }
		{}
	};

	class ÝþlevTanýmý : public Taným
	{
	public:
		TürGönderimi dönderdiðiTür;
		liste<BiçimselEtkenTanýmý> biçimselEtkenler;
		liste<Demeç> gövdesi;
		ÝþlevÖðeNiceleyicileri iþlevÖðeNiceleyicileri;
		ÝþlevKapsamý açtýðýKapsam;

		ÝþlevTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü,
			const TürGönderimi& dönderdiðiTür,
			const ÝþlevÖðeNiceleyicileri& iþlevÖðeNiceleyicileri)
			:
			Taným{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü },
			dönderdiðiTür{ dönderdiðiTür },
			biçimselEtkenler{},
			gövdesi{},
			iþlevÖðeNiceleyicileri{ iþlevÖðeNiceleyicileri },
			açtýðýKapsam{}
		{}
	};

	class GirdiTanýmý : public Taným
	{
	public:
		liste<BiçimselEtkenTanýmý> biçimselEtkenler;
		liste<Demeç> gövdesi;

		GirdiTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü)
			:
			Taným{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü },
			biçimselEtkenler{},
			gövdesi{}
		{}
	};

	class VeriTanýmý : public Taným
	{
	public:
		Deyim baþlangýçDeðeri;
		bool deðiþebilirMi;

		VeriTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü,
			const Deyim& baþlangýçDeðeri,
			const bool& deðiþebilirMi)
			:
			Taným{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü },
			baþlangýçDeðeri{ baþlangýçDeðeri },
			deðiþebilirMi{ deðiþebilirMi }
		{}
	};

	class SýralamaHazýrBilgisiTanýmý : public Taným
	{
	public:
		Deyim deðer;

		SýralamaHazýrBilgisiTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü,
			const Deyim& deðer)
			:
			Taným{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü },
			deðer{ deðer }
		{}
	};

	class ÝþlevBildirimi : public Bildirim
	{
	public:
		liste<BiçimselEtkenBildirimi> biçimselEtkenler;
		ÝþlevÖðeNiceleyicileri* iþlevÖðeNiceleyicileri;
	};

	class DeðiþkenBildirimi : public Bildirim
	{
	public:
		bool deðiþebilirMi;
	};

	class BiçimselEtkenBildirimi : public Bildirim
	{};

	class Dýþsal : public SaklamaBelirlemesi
	{};

	class ÝþlevSürekli : public SaklamaBelirlemesi
	{};

	class DosyaYereli : public SaklamaBelirlemesi
	{};

	class SýnýfBaþýnaÖðe : public SaklamaBelirlemesi
	{};

	class TanýmYok : public SaklamaBelirlemesi
	{};

	class Sanal : public SanalBelirlemesi
	{};

	class DeðiþkenTanýmý : public VeriTanýmý
	{
	public:
		DeðiþkenTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü,
			const Deyim& baþlangýçDeðeri,
			const bool& deðiþebilirMi)
			:
			VeriTanýmý{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü, baþlangýçDeðeri, deðiþebilirMi }
		{}
	};

	class BiçimselEtkenTanýmý : public VeriTanýmý
	{
	public:
		BiçimselEtkenTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü,
			const Deyim& baþlangýçDeðeri,
			const bool& deðiþebilirMi)
			:
			VeriTanýmý{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü, baþlangýçDeðeri, deðiþebilirMi }
		{}
	};

	class BitAlanýTanýmý : public VeriTanýmý
	{
	public:
		Deyim bitAlanýGeniþliði;

		BitAlanýTanýmý(
			const KaynakKonumu& konumBilgisi,
			const SaklamaBelirlemesi& saklamaBelirleyicisi,
			const EriþimÇeþidi& eriþimÇeþidi,
			const dize& baðlamaBelirleyicisi,
			const Ad& tanýmlayýcýAdý,
			const TürGönderimi& tanýmTürü,
			const Deyim& baþlangýçDeðeri,
			const bool& deðiþebilirMi,
			const Deyim& bitAlanýGeniþliði)
			:
			VeriTanýmý{ konumBilgisi, saklamaBelirleyicisi, eriþimÇeþidi, baðlamaBelirleyicisi, tanýmlayýcýAdý, tanýmTürü, baþlangýçDeðeri, deðiþebilirMi },
			bitAlanýGeniþliði{ bitAlanýGeniþliði }
		{}
	};

	class AdlýTürTanýmý : public TürTanýmý
	{
	public:
		AdlýTür tanýmTürü;

		AdlýTürTanýmý(
			const KaynakKonumu& konumBilgisi,
			const Ad& türAdý,
			const AdlýTür& tanýmTürü)
			:
			TürTanýmý{ konumBilgisi, türAdý },
			tanýmTürü{ tanýmTürü }
		{}
	};

	class BütünTürüTanýmý : public TürTanýmý
	{
	public:
		BütünTürü* bütünTürü;
	};

	class SýralamaTürüTanýmý : public TürTanýmý
	{
	public:
		SýralamaTürü* tanýmTürü;
	};

	class BütünTürüBildirimi : public TürBildirimi
	{};

	class SýralamaTürüBildirimi : public TürBildirimi
	{};

	class ÝçermeBirimi : public ÖniþleyiciUnsuru
	{
	public:
		KaynakDosyasýGönderimi* dosya;
	};

	class MakroÇaðrýsý : public ÖniþleyiciUnsuru
	{
	public:
		MakroTanýmý* hedefi;
	};

	class MakroTanýmý : public ÖniþleyiciUnsuru
	{
	public:
		dize makroAdý;
		dize gövdesi;
	};

	class Yorum : public ÖniþleyiciUnsuru
	{
	public:
		dize gövdesi;
	};

	class Açýk : public EriþimÇeþidi
	{};

	class Korumalý : public EriþimÇeþidi
	{};

	class Özel : public EriþimÇeþidi
	{};

	class AdlýTürGönderimi : public TürGönderimi
	{
	public:
		Ad* türAdý;
		TürTanýmý* türü;
	};

	class AdsýzTürGönderimi : public TürGönderimi
	{
	public:
		Tür* türü;
	};

	class DeyimDemeci : public Demeç
	{
	public:
		Deyim* deyimi;
	};

	class AtlamaDemeci : public Demeç
	{
	public:
		Deyim* hedefi;
	};

	class KýrmaDemeci : public Demeç
	{
	public:
		EtiketEriþimi* hedefi;
	};

	class SürmeDemeci : public Demeç
	{
	public:
		EtiketEriþimi* hedefi;
	};

	class EtiketliDemeç : public Demeç
	{
	public:
		EtiketTanýmý* etiketi;
		Demeç* demeci;
	};

	class GövdeDemeci : public Demeç
	{
	public:
		liste<Demeç> altDemeçleri;
		GövdeKapsamý* açtýðýKapsam;
	};

	class BoþDemeç : public Demeç
	{};

	class ÝseDemeci : public Demeç
	{
	public:
		Deyim* koþulu;
		Demeç* iseGövdesi;
		Demeç* deðilseGövdesi;
	};

	class DüðmeDemeci : public Demeç
	{
	public:
		Deyim* düðmeDeyimi;
		DüðmeDurumu* durumlarý;
	};

	class DöndermeDemeci : public Demeç
	{
	public:
		Deyim* dönderdiðiDeðer;
	};

	class DöngüDemeci : public Demeç
	{
	public:
		Deyim* koþulu;
		Demeç* gövdesi;
	};

	class DenemeDemeci : public Demeç
	{
	public:
		Demeç* koruduðuDemeç;
		liste<YakalamaGövdesi> yakalamaGövdeleri;
		Demeç* sonDemeci;
	};

	class BildirimVeyaTanýmDemeci : public Demeç
	{
	public:
		TanýmNesnesi* bildirimiVeyaTanýmý;
	};

	class AtmaDemeci : public Demeç
	{
	public:
		Deyim* kuraldýþýsý;
	};

	class SilmeDemeci : public Demeç
	{
	public:
		Deyim* iþleneni;
	};

	class BitirmeDemeci : public Demeç
	{};

	class DurumGövdesi : public DüðmeDurumu
	{
	public:
		liste<Deyim> durumDeyimleri;
	};

	class VarsayýlanGövde : public DüðmeDurumu
	{};

	class ÝkenDemeci : public DöngüDemeci
	{};

	class YapYoklaDemeci : public DöngüDemeci
	{};

	class ÝçinDemeci : public DöngüDemeci
	{
	public:
		Deyim* baþlatmaGövdesi;
		Deyim* yinelemeGövdesi;
	};

	class ÝçinÖnceYoklaDemeci : public ÝçinDemeci
	{};

	class ÝçinSonraYoklaDemeci : public ÝçinDemeci
	{};

	class TürYakalamaGövdesi : public YakalamaGövdesi
	{
	public:
		liste<Tür> kuraldýþýlarý;
	};

	class DeðiþkenYakalamaGövdesi : public YakalamaGövdesi
	{
	public:
		VeriTanýmý* kuraldýþýDeðiþkeni;
	};

	class HazýrBilgi : public Deyim
	{
	public:
		dize deðeri;

		HazýrBilgi(
			const KaynakKonumu& konumBilgisi,
			const paiþ<TürGönderimi>& deyimTürü,
			const dize& deðeri)
			:
			Deyim{ konumBilgisi, deyimTürü },
			deðeri{ deðeri }
		{}
	};

	class DökümDeyimi : public Deyim
	{
	public:
		TürGönderimi* dökümTürü;
		Deyim* deyimi;
	};

	class BütünDeyimi : public Deyim
	{};

	class TekliDeyim : public Deyim
	{
	public:
		TekliÝþleç* iþleci;
		Deyim* iþleneni;
	};

	class ÝkiliDeyim : public Deyim
	{
	public:
		ÝkiliÝþleç* iþleci;
		Deyim* solÝþleneni;
		Deyim* saðÝþleneni;
	};

	class KoþulluDeyim : public Deyim
	{
	public:
		Deyim* koþulu;
		Deyim* iþlenenDoðruysa;
		Deyim* iþlenenYanlýþsa;
	};

	class ArlýkDeyimi : public Deyim
	{
	public:
		Deyim* baþlangýçDeyimi;
		Deyim* bitiþDeyimi;
	};

	class ÝþlevÇaðrýsýDeyimi : public Deyim
	{
	public:
		Deyim* çaðrýlanÝþlevi;
		liste<EdimselEtken> edimselEtkenleri;
	};

	class YeniDeyimi : public Deyim
	{
	public:
		TürGönderimi* yeniTürü;
		liste<EdimselEtken> edimselEtkenleri;
	};

	class AdGönderimi : public Deyim
	{
	public:
		Ad* tanýmlayýcýAdý;
		TanýmNesnesi* hedefi;
	};

	class EtiketEriþimi : public Deyim
	{
	public:
		Ad* etiketAdý;
		EtiketTanýmý* etiketTanýmý;
	};

	class DiziEriþimi : public Deyim
	{
	public:
		Deyim* diziAdý;
		liste<Deyim> sýralarý;
	};

	class DipnotDeyimi : public Deyim
	{
	public:
		TürGönderimi* dipnotTürü;
		liste<Deyim> öðeDeðerleri;
	};

	class TopluDeyim : public Deyim
	{
	public:
		liste<Deyim> deyimListesi;
	};

	class TanýmlayýcýGönderimi : public AdGönderimi
	{};

	class NitelikliTanýmlayýcýGönderimi : public AdGönderimi
	{
	public:
		Deyim* niteleyicileri;
		TanýmlayýcýGönderimi* öðesi;
	};

	class TürNitelikliTanýmlayýcýGönderimi : public AdGönderimi
	{
	public:
		TürGönderimi* bütünTürü;
		TanýmlayýcýGönderimi* öðesi;
	};

	class ÝþaretçiÜzerindenNitelikli : public NitelikliTanýmlayýcýGönderimi
	{};

	class VeriÜzerindenNitelikli : public NitelikliTanýmlayýcýGönderimi
	{};

	class TamsayýHazýrBilgisi : public HazýrBilgi
	{};

	class DizeHazýrBilgisi : public HazýrBilgi
	{};

	class KarakterHazýrBilgisi : public HazýrBilgi
	{};

	class GerçekHazýrBilgisi : public HazýrBilgi
	{};

	class MantýkHazýrBilgisi : public HazýrBilgi
	{};

	class BitHazýrBilgisi : public HazýrBilgi
	{};

	class SýralamaHazýrBilgisi : public HazýrBilgi
	{};

	class TekliArtý : public TekliÝþleç
	{};

	class TekliEksi : public TekliÝþleç
	{};

	class Deðil : public TekliÝþleç
	{};

	class BitselDeðil : public TekliÝþleç
	{};

	class Gönderim : public TekliÝþleç
	{};

	class Alým : public TekliÝþleç
	{};

	class Arttýrma : public TekliÝþleç
	{};

	class Azaltma : public TekliÝþleç
	{};

	class SonraArttýrma : public TekliÝþleç
	{};

	class SonraAzaltma : public TekliÝþleç
	{};

	class Toplama : public ÝkiliÝþleç
	{};

	class Çýkarma : public ÝkiliÝþleç
	{};

	class Çarpma : public ÝkiliÝþleç
	{};

	class Bölme : public ÝkiliÝþleç
	{};

	class Kalan : public ÝkiliÝþleç
	{};

	class Üs : public ÝkiliÝþleç
	{};

	class Ve : public ÝkiliÝþleç
	{};

	class Veya : public ÝkiliÝþleç
	{};

	class Eþittir : public ÝkiliÝþleç
	{};

	class EþitDeðildir : public ÝkiliÝþleç
	{};

	class Büyüktür : public ÝkiliÝþleç
	{};

	class BüyükDeðildir : public ÝkiliÝþleç
	{};

	class Küçüktür : public ÝkiliÝþleç
	{};

	class KüçükDeðildir : public ÝkiliÝþleç
	{};

	class BitselVe : public ÝkiliÝþleç
	{};

	class BitselVeya : public ÝkiliÝþleç
	{};

	class BitselYaDa : public ÝkiliÝþleç
	{};

	class BitselSolaKaydýrma : public ÝkiliÝþleç
	{};

	class BitselSaðaKaydýrma : public ÝkiliÝþleç
	{};

	class Atama : public ÝkiliÝþleç
	{};

	class ÝþleçliAtama : public ÝkiliÝþleç
	{
	public:
		ÝkiliÝþleç* ikiliÝþleci;
	};

	class EdimselEtkenDeyimi : public EdimselEtken
	{
	public:
		Deyim* deðeri;
	};

	class KayýpEdimselEtken : public EdimselEtken
	{};

	class DeðerdenBiçimselEtkenDeyimi : public EdimselEtkenDeyimi
	{};

	class GönderimdenBiçimselEtkenDeyimi : public EdimselEtkenDeyimi
	{};
}

#endif

#ifndef SSA_SÖZDÝZÝMÝ_NESNESÝ
#define SSA_SÖZDÝZÝMÝ_NESNESÝ

#include "SoyutSözdizimi.h"
#include "SSAKaynakNesnesi.h"
#include <vector>

namespace bad
{
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

	class SSASözdizimiNesnesi : public SSANesnesi
	{
	public:
		KaynakKonumu* konumBilgisi;
		std::vector<ÖniþleyiciUnsuru> öniþleyiciUnsurlarý;
		std::vector<DipnotDeyimi> dipnotlar;
	};

	class ÖniþleyiciUnsuru : public SSASözdizimiNesnesi
	{};

	class TanýmNesnesi : public SSASözdizimiNesnesi
	{};

	class Tür : public SSASözdizimiNesnesi
	{
	public:
		bool sabitMi;
	};

	class Deyim : public SSASözdizimiNesnesi
	{
	public:
		TürGönderimi* deyimTürü;
	};

	class Demeç : public SSASözdizimiNesnesi
	{};

	class ÝkincilSözdizimiNesnesi : public SSASözdizimiNesnesi
	{};

	class Boyut : public ÝkincilSözdizimiNesnesi
	{
	public:
		Deyim* altSýnýrý;
		Deyim* üstSýnýrý;
	};

	class Ad : public ÝkincilSözdizimiNesnesi
	{
	public:
		std::string adDizesi;
	};

	class DüðmeDurumu : public ÝkincilSözdizimiNesnesi
	{
	public:
		bool bütünDurumlarýDeðerlendirMi;
		std::vector<Demeç> gövdesi;
	};

	class YakalamaGövdesi : public ÝkincilSözdizimiNesnesi
	{
	public:
		Demeç* gövdesi;
	};

	class TekliÝþleç : public ÝkincilSözdizimiNesnesi
	{};
	
	class ÝkiliÝþleç : public ÝkincilSözdizimiNesnesi
	{};
	
	class SaklamaBelirlemesi : public ÝkincilSözdizimiNesnesi
	{};

	class SanalBelirlemesi : public ÝkincilSözdizimiNesnesi
	{};

	class EriþimÇeþidi : public ÝkincilSözdizimiNesnesi
	{};

	class EdimselEtken : public ÝkincilSözdizimiNesnesi
	{};

	class ÝþlevÖðeNiceleyicileri : public ÝkincilSözdizimiNesnesi
	{
	public:
		bool arkadaþMý;
		bool satýrÝçiMi;
		bool buSabitMi;
		SanalBelirlemesi* sanalBelirleyicisi;
	};

	class Köken : public ÝkincilSözdizimiNesnesi
	{
	public:
		SanalBelirlemesi* sanalBelirleyici;
		EriþimÇeþidi* eriþimÇeþidi;
		std::vector<AdlýTürGönderimi> sýnýfAdý;
	};

	class ÖðeNesnesi : public ÝkincilSözdizimiNesnesi
	{
	public:
		int kaçýklýðý;
		TanýmNesnesi* öðesi;
	};

	class BildirimVeyaTaným : public TanýmNesnesi
	{
	public:
		SaklamaBelirlemesi* saklamaBelirleyicisi;
		EriþimÇeþidi* eriþimÇeþidi;
		std::string baðlamaBelirleyicisi;
	};
	
	class TürTanýmý : public TanýmNesnesi
	{
	public:
		Ad* türAdý;
	};

	class AdUzayýTanýmý : public TanýmNesnesi
	{
	public:
		Ad* adUzayý;
		std::vector<TanýmNesnesi> gövdesi;
		AdUzayýTürü* adUzayýTürü;
	};

	class EtiketTanýmý : public TanýmNesnesi
	{
	public:
		Ad* etiketAdý;
		EtiketTürü* etiketTürü;
	};

	class TürBildirimi : public TanýmNesnesi
	{
	public:
		TürGönderimi* türGönderimi;
	};

	class Taným : public BildirimVeyaTaným
	{
	public:
		Ad* tanýmlayýcýAdý;
		TürGönderimi* tanýmTürü;
	};

	class Bildirim : public BildirimVeyaTaným
	{
	public:
		Taným* tanýmGönderimi;
		Ad* tanýmlayýcýAdý;
		TürGönderimi* bildirimTürü;
	};

	class ÝþlevTanýmý : public Taným
	{
	public:
		TürGönderimi* dönderdiðiTür;
		std::vector<BiçimselEtkenTanýmý> biçimselEtkenler;
		std::vector<Demeç> gövdesi;
		ÝþlevÖðeNiceleyicileri* iþlevÖðeNiceleyicileri;
		ÝþlevKapsamý* açtýðýKapsam;
	};

	class GirdiTanýmý : public Taným
	{
	public:
		std::vector<BiçimselEtkenTanýmý> biçimselEtkenler;
		std::vector<Demeç> gövdesi;
	};

	class VeriTanýmý : public Taným
	{
	public:
		Deyim* baþlangýçDeðeri;
		bool deðiþebilirMi;
	};

	class SýralamaHazýrBilgisiTanýmý : public Taným
	{
	public:
		Deyim* value;
	};

	class ÝþlevBildirimi : public Bildirim
	{
	public:
		std::vector<BiçimselEtkenBildirimi> biçimselEtkenler;
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
	{};

	class BiçimselEtkenTanýmý : public VeriTanýmý
	{};

	class BitAlanýTanýmý : public VeriTanýmý
	{
	public:
		Deyim* bitAlanýGeniþliði;
	};

	class AdlýTürTanýmý : public TürTanýmý
	{
	public:
		AdlýTür* tanýmTürü;
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
		std::string makroAdý;
		std::string gövdesi;
	};

	class Yorum : public ÖniþleyiciUnsuru
	{
	public:
		std::string gövdesi;
	};

	class ÝþlevTürü : public Tür
	{
	public:
		TürGönderimi* dönderdiðiTür;
		std::vector<BiçimselEtkenTürü> etkenleri;
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
		std::vector<SýralamaHazýrBilgisiTanýmý> sýralamaHazýrBilgileri;
	};

	class KurulmuþTür : public VeriTürü
	{
	public:
		TürGönderimi* temelTürü;
	};

	class BütünTürü : public VeriTürü
	{
	public:
		std::vector<ÖðeNesnesi> öðeleri;
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
		std::vector<Boyut> dereceleri;
	};

	class YapýTürü : public BütünTürü
	{};

	class BirleþmeTürü : public BütünTürü
	{};

	class SýnýfTürü : public BütünTürü
	{
	public:
		std::vector<Köken> kökeni;
	};

	class DipnotTürü : public BütünTürü
	{};

	class DeðerdenBiçimselEtkenTürü : public BiçimselEtkenTürü
	{};

	class GönderimdenBiçimselEtkenTürü : public BiçimselEtkenTürü
	{};

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
		std::vector<Demeç> altDemeçleri;
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
		std::vector<YakalamaGövdesi> yakalamaGövdeleri;
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
		std::vector<Deyim> durumDeyimleri;
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
		std::vector<Tür> kuraldýþýlarý;
	};

	class DeðiþkenYakalamaGövdesi : public YakalamaGövdesi
	{
	public:
		VeriTanýmý* kuraldýþýDeðiþkeni;
	};

	class HazýrBilgi : public Deyim
	{
	public:
		std::string deðeri;
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
		std::vector<EdimselEtken> edimselEtkenleri;
	};

	class YeniDeyimi : public Deyim
	{
	public:
		TürGönderimi* yeniTürü;
		std::vector<EdimselEtken> edimselEtkenleri;
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
		std::vector<Deyim> sýralarý;
	};

	class DipnotDeyimi : public Deyim
	{
	public:
		TürGönderimi* dipnotTürü;
		std::vector<Deyim> öðeDeðerleri;
	};

	class TopluDeyim : public Deyim
	{
	public:
		std::vector<Deyim> deyimListesi;
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

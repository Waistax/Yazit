#ifndef SSA_S�ZD�Z�M�_NESNES�
#define SSA_S�ZD�Z�M�_NESNES�

#include "SoyutS�zdizimi.h"
#include "SSAKaynakNesnesi.h"
#include <vector>

namespace bad
{
	class SSAS�zdizimiNesnesi;
	class �ni�leyiciUnsuru;
	class Tan�mNesnesi;
	class T�r;
	class Deyim;
	class Deme�;
	class �kincilS�zdizimiNesnesi;
	class Boyut;
	class Ad;
	class D��meDurumu;
	class YakalamaG�vdesi;
	class Tekli��le�;
	class �kili��le�;
	class SaklamaBelirlemesi;
	class SanalBelirlemesi;
	class Eri�im�e�idi;
	class EdimselEtken;
	class ��lev��eNiceleyicileri;
	class K�ken;
	class ��eNesnesi;
	class BildirimVeyaTan�m;
	class T�rTan�m�;
	class AdUzay�Tan�m�;
	class EtiketTan�m�;
	class T�rBildirimi;
	class Tan�m;
	class Bildirim;
	class ��levTan�m�;
	class GirdiTan�m�;
	class VeriTan�m�;
	class S�ralamaHaz�rBilgisiTan�m�;
	class ��levBildirimi;
	class De�i�kenBildirimi;
	class Bi�imselEtkenBildirimi;
	class D��sal;
	class ��levS�rekli;
	class DosyaYereli;
	class S�n�fBa��na��e;
	class Tan�mYok;
	class Sanal;
	class De�i�kenTan�m�;
	class Bi�imselEtkenTan�m�;
	class BitAlan�Tan�m�;
	class Adl�T�rTan�m�;
	class B�t�nT�r�Tan�m�;
	class S�ralamaT�r�Tan�m�;
	class B�t�nT�r�Bildirimi;
	class S�ralamaT�r�Bildirimi;
	class ��ermeBirimi;
	class Makro�a�r�s�;
	class MakroTan�m�;
	class Yorum;
	class ��levT�r�;
	class VeriT�r�;
	class EtiketT�r�;
	class AdUzay�T�r�;
	class T�rG�nderimi;
	class �lkelT�r;
	class S�ralamaT�r�;
	class Kurulmu�T�r;
	class B�t�nT�r�;
	class Kurald���T�r;
	class Bi�imselEtkenT�r�;
	class Adl�T�r;
	class Say�T�r�;
	class Hi�lik;
	class Mant�k;
	class T�mlevT�r�;
	class Ger�ekT�r�;
	class Bayt;
	class Karakter;
	class K�saTamsay�;
	class Tamsay�;
	class UzunTamsay�;
	class Ger�ek;
	class �ift;
	class Uzun�ift;
	class ToplamaT�r�;
	class ��aret�iT�r�;
	class G�nderimT�r�;
	class Aral�kT�r�;
	class DiziT�r�;
	class Yap�T�r�;
	class Birle�meT�r�;
	class S�n�fT�r�;
	class DipnotT�r�;
	class De�erdenBi�imselEtkenT�r�;
	class G�nderimdenBi�imselEtkenT�r�;
	class A��k;
	class Korumal�;
	class �zel;
	class Adl�T�rG�nderimi;
	class Ads�zT�rG�nderimi;
	class DeyimDemeci;
	class AtlamaDemeci;
	class K�rmaDemeci;
	class S�rmeDemeci;
	class EtiketliDeme�;
	class G�vdeDemeci;
	class Bo�Deme�;
	class �seDemeci;
	class D��meDemeci;
	class D�ndermeDemeci;
	class D�ng�Demeci;
	class DenemeDemeci;
	class BildirimVeyaTan�mDemeci;
	class AtmaDemeci;
	class SilmeDemeci;
	class BitirmeDemeci;
	class DurumG�vdesi;
	class Varsay�lanG�vde;
	class �kenDemeci;
	class YapYoklaDemeci;
	class ��inDemeci;
	class ��in�nceYoklaDemeci;
	class ��inSonraYoklaDemeci;
	class T�rYakalamaG�vdesi;
	class De�i�kenYakalamaG�vdesi;
	class Haz�rBilgi;
	class D�k�mDeyimi;
	class B�t�nDeyimi;
	class TekliDeyim;
	class �kiliDeyim;
	class Ko�ulluDeyim;
	class Arl�kDeyimi;
	class ��lev�a�r�s�Deyimi;
	class YeniDeyimi;
	class AdG�nderimi;
	class EtiketEri�imi;
	class DiziEri�imi;
	class DipnotDeyimi;
	class ToplamaDeyimi;
	class Tan�mlay�c�G�nderimi;
	class NitelikliTan�mlay�c�G�nderimi;
	class T�rNitelikliTan�mlay�c�G�nderimi;
	class ��aret�i�zerindenNitelikli;
	class Veri�zerindenNitelikli;
	class Tamsay�Haz�rBilgisi;
	class DizeHaz�rBilgisi;
	class KarakterHaz�rBilgisi;
	class Ger�ekHaz�rBilgisi;
	class Mant�kHaz�rBilgisi;
	class BitHaz�rBilgisi;
	class S�ralamaHaz�rBilgisi;
	class TekliArt�;
	class TekliEksi;
	class De�il;
	class BitselDe�il;
	class G�nderim;
	class Al�m;
	class Artt�rma;
	class Azaltma;
	class SonraArtt�rma;
	class SonraAzaltma;
	class Toplama;
	class ��karma;
	class �arpma;
	class B�lme;
	class Kalan;
	class �s;
	class Ve;
	class Veya;
	class E�ittir;
	class E�itDe�ildir;
	class B�y�kt�r;
	class B�y�kDe�ildir;
	class K���kt�r;
	class K���kDe�ildir;
	class BitselVe;
	class BitselVeya;
	class BitselYaDa;
	class BitselSolaKayd�rma;
	class BitselSa�aKayd�rma;
	class Atama;
	class ��le�liAtama;
	class EdimselEtkenDeyimi;
	class Kay�pEdimselEtken;
	class De�erdenBi�imselEtkenDeyimi;
	class G�nderimdenBi�imselEtkenDeyimi;

	class SSAS�zdizimiNesnesi : public SSANesnesi
	{
	public:
		KaynakKonumu* konumBilgisi;
		std::vector<�ni�leyiciUnsuru> �ni�leyiciUnsurlar�;
		std::vector<DipnotDeyimi> dipnotlar;
	};

	class �ni�leyiciUnsuru : public SSAS�zdizimiNesnesi
	{};

	class Tan�mNesnesi : public SSAS�zdizimiNesnesi
	{};

	class T�r : public SSAS�zdizimiNesnesi
	{
	public:
		bool sabitMi;
	};

	class Deyim : public SSAS�zdizimiNesnesi
	{
	public:
		T�rG�nderimi* deyimT�r�;
	};

	class Deme� : public SSAS�zdizimiNesnesi
	{};

	class �kincilS�zdizimiNesnesi : public SSAS�zdizimiNesnesi
	{};

	class Boyut : public �kincilS�zdizimiNesnesi
	{
	public:
		Deyim* altS�n�r�;
		Deyim* �stS�n�r�;
	};

	class Ad : public �kincilS�zdizimiNesnesi
	{
	public:
		std::string adDizesi;
	};

	class D��meDurumu : public �kincilS�zdizimiNesnesi
	{
	public:
		bool b�t�nDurumlar�De�erlendirMi;
		std::vector<Deme�> g�vdesi;
	};

	class YakalamaG�vdesi : public �kincilS�zdizimiNesnesi
	{
	public:
		Deme�* g�vdesi;
	};

	class Tekli��le� : public �kincilS�zdizimiNesnesi
	{};
	
	class �kili��le� : public �kincilS�zdizimiNesnesi
	{};
	
	class SaklamaBelirlemesi : public �kincilS�zdizimiNesnesi
	{};

	class SanalBelirlemesi : public �kincilS�zdizimiNesnesi
	{};

	class Eri�im�e�idi : public �kincilS�zdizimiNesnesi
	{};

	class EdimselEtken : public �kincilS�zdizimiNesnesi
	{};

	class ��lev��eNiceleyicileri : public �kincilS�zdizimiNesnesi
	{
	public:
		bool arkada�M�;
		bool sat�r��iMi;
		bool buSabitMi;
		SanalBelirlemesi* sanalBelirleyicisi;
	};

	class K�ken : public �kincilS�zdizimiNesnesi
	{
	public:
		SanalBelirlemesi* sanalBelirleyici;
		Eri�im�e�idi* eri�im�e�idi;
		std::vector<Adl�T�rG�nderimi> s�n�fAd�;
	};

	class ��eNesnesi : public �kincilS�zdizimiNesnesi
	{
	public:
		int ka��kl���;
		Tan�mNesnesi* ��esi;
	};

	class BildirimVeyaTan�m : public Tan�mNesnesi
	{
	public:
		SaklamaBelirlemesi* saklamaBelirleyicisi;
		Eri�im�e�idi* eri�im�e�idi;
		std::string ba�lamaBelirleyicisi;
	};
	
	class T�rTan�m� : public Tan�mNesnesi
	{
	public:
		Ad* t�rAd�;
	};

	class AdUzay�Tan�m� : public Tan�mNesnesi
	{
	public:
		Ad* adUzay�;
		std::vector<Tan�mNesnesi> g�vdesi;
		AdUzay�T�r�* adUzay�T�r�;
	};

	class EtiketTan�m� : public Tan�mNesnesi
	{
	public:
		Ad* etiketAd�;
		EtiketT�r�* etiketT�r�;
	};

	class T�rBildirimi : public Tan�mNesnesi
	{
	public:
		T�rG�nderimi* t�rG�nderimi;
	};

	class Tan�m : public BildirimVeyaTan�m
	{
	public:
		Ad* tan�mlay�c�Ad�;
		T�rG�nderimi* tan�mT�r�;
	};

	class Bildirim : public BildirimVeyaTan�m
	{
	public:
		Tan�m* tan�mG�nderimi;
		Ad* tan�mlay�c�Ad�;
		T�rG�nderimi* bildirimT�r�;
	};

	class ��levTan�m� : public Tan�m
	{
	public:
		T�rG�nderimi* d�nderdi�iT�r;
		std::vector<Bi�imselEtkenTan�m�> bi�imselEtkenler;
		std::vector<Deme�> g�vdesi;
		��lev��eNiceleyicileri* i�lev��eNiceleyicileri;
		��levKapsam�* a�t���Kapsam;
	};

	class GirdiTan�m� : public Tan�m
	{
	public:
		std::vector<Bi�imselEtkenTan�m�> bi�imselEtkenler;
		std::vector<Deme�> g�vdesi;
	};

	class VeriTan�m� : public Tan�m
	{
	public:
		Deyim* ba�lang��De�eri;
		bool de�i�ebilirMi;
	};

	class S�ralamaHaz�rBilgisiTan�m� : public Tan�m
	{
	public:
		Deyim* value;
	};

	class ��levBildirimi : public Bildirim
	{
	public:
		std::vector<Bi�imselEtkenBildirimi> bi�imselEtkenler;
		��lev��eNiceleyicileri* i�lev��eNiceleyicileri;
	};

	class De�i�kenBildirimi : public Bildirim
	{
	public:
		bool de�i�ebilirMi;
	};

	class Bi�imselEtkenBildirimi : public Bildirim
	{};

	class D��sal : public SaklamaBelirlemesi
	{};

	class ��levS�rekli : public SaklamaBelirlemesi
	{};

	class DosyaYereli : public SaklamaBelirlemesi
	{};

	class S�n�fBa��na��e : public SaklamaBelirlemesi
	{};

	class Tan�mYok : public SaklamaBelirlemesi
	{};

	class Sanal : public SanalBelirlemesi
	{};

	class De�i�kenTan�m� : public VeriTan�m�
	{};

	class Bi�imselEtkenTan�m� : public VeriTan�m�
	{};

	class BitAlan�Tan�m� : public VeriTan�m�
	{
	public:
		Deyim* bitAlan�Geni�li�i;
	};

	class Adl�T�rTan�m� : public T�rTan�m�
	{
	public:
		Adl�T�r* tan�mT�r�;
	};

	class B�t�nT�r�Tan�m� : public T�rTan�m�
	{
	public:
		B�t�nT�r�* b�t�nT�r�;
	};

	class S�ralamaT�r�Tan�m� : public T�rTan�m�
	{
	public:
		S�ralamaT�r�* tan�mT�r�;
	};

	class B�t�nT�r�Bildirimi : public T�rBildirimi
	{};

	class S�ralamaT�r�Bildirimi : public T�rBildirimi
	{};

	class ��ermeBirimi : public �ni�leyiciUnsuru
	{
	public:
		KaynakDosyas�G�nderimi* dosya;
	};

	class Makro�a�r�s� : public �ni�leyiciUnsuru
	{
	public:
		MakroTan�m�* hedefi;
	};

	class MakroTan�m� : public �ni�leyiciUnsuru
	{
	public:
		std::string makroAd�;
		std::string g�vdesi;
	};

	class Yorum : public �ni�leyiciUnsuru
	{
	public:
		std::string g�vdesi;
	};

	class ��levT�r� : public T�r
	{
	public:
		T�rG�nderimi* d�nderdi�iT�r;
		std::vector<Bi�imselEtkenT�r�> etkenleri;
	};

	class VeriT�r� : public T�r
	{};

	class EtiketT�r� : public T�r
	{};

	class AdUzay�T�r� : public T�r
	{};

	class T�rG�nderimi : public T�r
	{};

	class �lkelT�r : public VeriT�r�
	{};

	class S�ralamaT�r� : public VeriT�r�
	{
	public:
		std::vector<S�ralamaHaz�rBilgisiTan�m�> s�ralamaHaz�rBilgileri;
	};

	class Kurulmu�T�r : public VeriT�r�
	{
	public:
		T�rG�nderimi* temelT�r�;
	};

	class B�t�nT�r� : public VeriT�r�
	{
	public:
		std::vector<��eNesnesi> ��eleri;
		B�t�nKapsam�* a�t���Kapsam;
	};

	class Kurald���T�r : public VeriT�r�
	{};

	class Bi�imselEtkenT�r� : public VeriT�r�
	{
	public:
		T�rG�nderimi* t�r�;
	};

	class Adl�T�r : public VeriT�r�
	{
	public:
		T�r* g�vdesi;
	};

	class Say�T�r� : public �lkelT�r
	{
	public:
		bool i�aretliMi;
	};

	class Hi�lik : public �lkelT�r
	{};

	class Mant�k : public �lkelT�r
	{};

	class T�mlevT�r� : public Say�T�r�
	{
	public:
		int geni�li�i;
	};

	class Ger�ekT�r� : public Say�T�r�
	{
	public:
		int keskinli�i;
	};

	class Bayt : public Say�T�r�
	{};

	class Karakter : public Say�T�r�
	{};

	class K�saTamsay� : public T�mlevT�r�
	{};

	class Tamsay� : public T�mlevT�r�
	{};

	class UzunTamsay� : public T�mlevT�r�
	{};

	class Ger�ek : public Ger�ekT�r�
	{};

	class �ift : public Ger�ekT�r�
	{};

	class Uzun�ift : public Ger�ekT�r�
	{};

	class ToplamaT�r� : public Kurulmu�T�r
	{};

	class ��aret�iT�r� : public Kurulmu�T�r
	{
	public:
		int geni�li�i;
	};

	class G�nderimT�r� : public Kurulmu�T�r
	{};

	class Aral�kT�r� : public Kurulmu�T�r
	{};

	class DiziT�r� : public Kurulmu�T�r
	{
	public:
		std::vector<Boyut> dereceleri;
	};

	class Yap�T�r� : public B�t�nT�r�
	{};

	class Birle�meT�r� : public B�t�nT�r�
	{};

	class S�n�fT�r� : public B�t�nT�r�
	{
	public:
		std::vector<K�ken> k�keni;
	};

	class DipnotT�r� : public B�t�nT�r�
	{};

	class De�erdenBi�imselEtkenT�r� : public Bi�imselEtkenT�r�
	{};

	class G�nderimdenBi�imselEtkenT�r� : public Bi�imselEtkenT�r�
	{};

	class A��k : public Eri�im�e�idi
	{};

	class Korumal� : public Eri�im�e�idi
	{};

	class �zel : public Eri�im�e�idi
	{};

	class Adl�T�rG�nderimi : public T�rG�nderimi
	{
	public:
		Ad* t�rAd�;
		T�rTan�m�* t�r�;
	};

	class Ads�zT�rG�nderimi : public T�rG�nderimi
	{
	public:
		T�r* t�r�;
	};

	class DeyimDemeci : public Deme�
	{
	public:
		Deyim* deyimi;
	};

	class AtlamaDemeci : public Deme�
	{
	public:
		Deyim* hedefi;
	};

	class K�rmaDemeci : public Deme�
	{
	public:
		EtiketEri�imi* hedefi;
	};

	class S�rmeDemeci : public Deme�
	{
	public:
		EtiketEri�imi* hedefi;
	};

	class EtiketliDeme� : public Deme�
	{
	public:
		EtiketTan�m�* etiketi;
		Deme�* demeci;
	};

	class G�vdeDemeci : public Deme�
	{
	public:
		std::vector<Deme�> altDeme�leri;
		G�vdeKapsam�* a�t���Kapsam;
	};

	class Bo�Deme� : public Deme�
	{};

	class �seDemeci : public Deme�
	{
	public:
		Deyim* ko�ulu;
		Deme�* iseG�vdesi;
		Deme�* de�ilseG�vdesi;
	};

	class D��meDemeci : public Deme�
	{
	public:
		Deyim* d��meDeyimi;
		D��meDurumu* durumlar�;
	};

	class D�ndermeDemeci : public Deme�
	{
	public:
		Deyim* d�nderdi�iDe�er;
	};

	class D�ng�Demeci : public Deme�
	{
	public:
		Deyim* ko�ulu;
		Deme�* g�vdesi;
	};

	class DenemeDemeci : public Deme�
	{
	public:
		Deme�* korudu�uDeme�;
		std::vector<YakalamaG�vdesi> yakalamaG�vdeleri;
		Deme�* sonDemeci;
	};

	class BildirimVeyaTan�mDemeci : public Deme�
	{
	public:
		Tan�mNesnesi* bildirimiVeyaTan�m�;
	};

	class AtmaDemeci : public Deme�
	{
	public:
		Deyim* kurald���s�;
	};

	class SilmeDemeci : public Deme�
	{
	public:
		Deyim* i�leneni;
	};

	class BitirmeDemeci : public Deme�
	{};

	class DurumG�vdesi : public D��meDurumu
	{
	public:
		std::vector<Deyim> durumDeyimleri;
	};

	class Varsay�lanG�vde : public D��meDurumu
	{};

	class �kenDemeci : public D�ng�Demeci
	{};

	class YapYoklaDemeci : public D�ng�Demeci
	{};

	class ��inDemeci : public D�ng�Demeci
	{
	public:
		Deyim* ba�latmaG�vdesi;
		Deyim* yinelemeG�vdesi;
	};

	class ��in�nceYoklaDemeci : public ��inDemeci
	{};

	class ��inSonraYoklaDemeci : public ��inDemeci
	{};

	class T�rYakalamaG�vdesi : public YakalamaG�vdesi
	{
	public:
		std::vector<T�r> kurald���lar�;
	};

	class De�i�kenYakalamaG�vdesi : public YakalamaG�vdesi
	{
	public:
		VeriTan�m�* kurald���De�i�keni;
	};

	class Haz�rBilgi : public Deyim
	{
	public:
		std::string de�eri;
	};

	class D�k�mDeyimi : public Deyim
	{
	public:
		T�rG�nderimi* d�k�mT�r�;
		Deyim* deyimi;
	};

	class B�t�nDeyimi : public Deyim
	{};

	class TekliDeyim : public Deyim
	{
	public:
		Tekli��le�* i�leci;
		Deyim* i�leneni;
	};

	class �kiliDeyim : public Deyim
	{
	public:
		�kili��le�* i�leci;
		Deyim* sol��leneni;
		Deyim* sa���leneni;
	};

	class Ko�ulluDeyim : public Deyim
	{
	public:
		Deyim* ko�ulu;
		Deyim* i�lenenDo�ruysa;
		Deyim* i�lenenYanl��sa;
	};

	class Arl�kDeyimi : public Deyim
	{
	public:
		Deyim* ba�lang��Deyimi;
		Deyim* biti�Deyimi;
	};

	class ��lev�a�r�s�Deyimi : public Deyim
	{
	public:
		Deyim* �a�r�lan��levi;
		std::vector<EdimselEtken> edimselEtkenleri;
	};

	class YeniDeyimi : public Deyim
	{
	public:
		T�rG�nderimi* yeniT�r�;
		std::vector<EdimselEtken> edimselEtkenleri;
	};

	class AdG�nderimi : public Deyim
	{
	public:
		Ad* tan�mlay�c�Ad�;
		Tan�mNesnesi* hedefi;
	};

	class EtiketEri�imi : public Deyim
	{
	public:
		Ad* etiketAd�;
		EtiketTan�m�* etiketTan�m�;
	};

	class DiziEri�imi : public Deyim
	{
	public:
		Deyim* diziAd�;
		std::vector<Deyim> s�ralar�;
	};

	class DipnotDeyimi : public Deyim
	{
	public:
		T�rG�nderimi* dipnotT�r�;
		std::vector<Deyim> ��eDe�erleri;
	};

	class ToplamaDeyimi : public Deyim
	{
	public:
		std::vector<Deyim> deyimListesi;
	};

	class Tan�mlay�c�G�nderimi : public AdG�nderimi
	{};

	class NitelikliTan�mlay�c�G�nderimi : public AdG�nderimi
	{
	public:
		Deyim* niteleyicileri;
		Tan�mlay�c�G�nderimi* ��esi;
	};

	class T�rNitelikliTan�mlay�c�G�nderimi : public AdG�nderimi
	{
	public:
		T�rG�nderimi* b�t�nT�r�;
		Tan�mlay�c�G�nderimi* ��esi;
	};

	class ��aret�i�zerindenNitelikli : public NitelikliTan�mlay�c�G�nderimi
	{};

	class Veri�zerindenNitelikli : public NitelikliTan�mlay�c�G�nderimi
	{};

	class Tamsay�Haz�rBilgisi : public Haz�rBilgi
	{};

	class DizeHaz�rBilgisi : public Haz�rBilgi
	{};

	class KarakterHaz�rBilgisi : public Haz�rBilgi
	{};

	class Ger�ekHaz�rBilgisi : public Haz�rBilgi
	{};

	class Mant�kHaz�rBilgisi : public Haz�rBilgi
	{};

	class BitHaz�rBilgisi : public Haz�rBilgi
	{};

	class S�ralamaHaz�rBilgisi : public Haz�rBilgi
	{};

	class TekliArt� : public Tekli��le�
	{};

	class TekliEksi : public Tekli��le�
	{};

	class De�il : public Tekli��le�
	{};

	class BitselDe�il : public Tekli��le�
	{};

	class G�nderim : public Tekli��le�
	{};

	class Al�m : public Tekli��le�
	{};

	class Artt�rma : public Tekli��le�
	{};

	class Azaltma : public Tekli��le�
	{};

	class SonraArtt�rma : public Tekli��le�
	{};

	class SonraAzaltma : public Tekli��le�
	{};

	class Toplama : public �kili��le�
	{};

	class ��karma : public �kili��le�
	{};

	class �arpma : public �kili��le�
	{};

	class B�lme : public �kili��le�
	{};

	class Kalan : public �kili��le�
	{};

	class �s : public �kili��le�
	{};

	class Ve : public �kili��le�
	{};

	class Veya : public �kili��le�
	{};

	class E�ittir : public �kili��le�
	{};

	class E�itDe�ildir : public �kili��le�
	{};

	class B�y�kt�r : public �kili��le�
	{};

	class B�y�kDe�ildir : public �kili��le�
	{};

	class K���kt�r : public �kili��le�
	{};

	class K���kDe�ildir : public �kili��le�
	{};

	class BitselVe : public �kili��le�
	{};

	class BitselVeya : public �kili��le�
	{};

	class BitselYaDa : public �kili��le�
	{};

	class BitselSolaKayd�rma : public �kili��le�
	{};

	class BitselSa�aKayd�rma : public �kili��le�
	{};

	class Atama : public �kili��le�
	{};

	class ��le�liAtama : public �kili��le�
	{
	public:
		�kili��le�* ikili��leci;
	};

	class EdimselEtkenDeyimi : public EdimselEtken
	{
	public:
		Deyim* de�eri;
	};

	class Kay�pEdimselEtken : public EdimselEtken
	{};

	class De�erdenBi�imselEtkenDeyimi : public EdimselEtkenDeyimi
	{};

	class G�nderimdenBi�imselEtkenDeyimi : public EdimselEtkenDeyimi
	{};
}

#endif

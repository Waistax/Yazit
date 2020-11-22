#ifndef SSA_KAYNAK_NESNES�
#define SSA_KAYNAK_NESNES�

#include "SSANesnesi.h"
#include "SSAS�zdizimiNesnesi.h"
#include "SSAAnlamsalNesnesi.h"
#include "T�rler.h"

namespace bad
{
	class SSAKaynakNesnesi;
	class KaynakDosyas�;
	class KaynakKonumu;
	class DerlemeBirimi;
	class KaynakDosyas�G�nderimi;

	class SSAKaynakNesnesi : public SSANesnesi
	{};

	class KaynakDosyas� : public SSAKaynakNesnesi
	{
	public:
		dize yolu;
	};

	class KaynakKonumu : public SSAKaynakNesnesi
	{
	public:
		int ba�lang��Sat�r�;
		int ba�lang��S�tunu;
		int biti�Sat�r�;
		int biti�S�tunu;
		KaynakDosyas�* bulundu�uDosya;
	};

	class DerlemeBirimi : public KaynakDosyas�
	{
	public:
		dize dili;
		liste<Tan�mNesnesi> par�alar�;
		Yaz�l�mKapsam�* a�t���Kapsam;
	};

	class KaynakDosyas�G�nderimi : public KaynakDosyas�
	{
	public:
		KaynakKonumu* konumBilgisi;
		KaynakDosyas�* g�nderdi�iDosya;
	};
}

#endif

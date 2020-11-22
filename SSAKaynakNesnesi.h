#ifndef SSA_KAYNAK_NESNESÝ
#define SSA_KAYNAK_NESNESÝ

#include "SSANesnesi.h"
#include "SSASözdizimiNesnesi.h"
#include "SSAAnlamsalNesnesi.h"
#include "Türler.h"

namespace bad
{
	class SSAKaynakNesnesi;
	class KaynakDosyasý;
	class KaynakKonumu;
	class DerlemeBirimi;
	class KaynakDosyasýGönderimi;

	class SSAKaynakNesnesi : public SSANesnesi
	{};

	class KaynakDosyasý : public SSAKaynakNesnesi
	{
	public:
		dize yolu;
	};

	class KaynakKonumu : public SSAKaynakNesnesi
	{
	public:
		int baþlangýçSatýrý;
		int baþlangýçSütunu;
		int bitiþSatýrý;
		int bitiþSütunu;
		KaynakDosyasý* bulunduðuDosya;
	};

	class DerlemeBirimi : public KaynakDosyasý
	{
	public:
		dize dili;
		liste<TanýmNesnesi> parçalarý;
		YazýlýmKapsamý* açtýðýKapsam;
	};

	class KaynakDosyasýGönderimi : public KaynakDosyasý
	{
	public:
		KaynakKonumu* konumBilgisi;
		KaynakDosyasý* gönderdiðiDosya;
	};
}

#endif

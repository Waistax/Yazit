#ifndef SSA_KAYNAK_NESNESÝ
#define SSA_KAYNAK_NESNESÝ

#include "SoyutSözdizimi.h"
#include "SSASözdizimiNesnesi.h"
#include "SSAAnlamsalNesnesi.h"
#include <string>
#include <vector>

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
		std::string yolu;
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
		std::string dili;
		std::vector<TanýmNesnesi> parçalarý;
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

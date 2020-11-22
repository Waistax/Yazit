#ifndef SSA_ANLAMSAL_NESNESÝ
#define SSA_ANLAMSAL_NESNESÝ

#include "SSANesnesi.h"
#include "SSAKaynakNesnesi.h"
#include "SSASözdizimiNesnesi.h"
#include "Türler.h"

namespace bad
{
	class SSAnlam;
	class Tasarý;
	class Kapsam;
	class ÝþlevKapsamý;
	class BütünKapsamý;
	class GövdeKapsamý;
	class YazýlýmKapsamý;
	class KüreselKapsam;

	class SSAAnlamsalNesnesi : public SSANesnesi
	{};

	class Tasarý : public SSAAnlamsalNesnesi
	{
	public:
		KüreselKapsam* dýþKapsam;
		liste<DerlemeBirimi> dosyalar;
	};

	class Kapsam : public SSAAnlamsalNesnesi
	{
	public:
		liste<TanýmNesnesi> tanýmNesneleri;
		liste<Kapsam> altKapsamlar;
	};

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
}

#endif

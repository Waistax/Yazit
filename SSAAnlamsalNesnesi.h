#ifndef SSA_ANLAMSAL_NESNES�
#define SSA_ANLAMSAL_NESNES�

#include "SSANesnesi.h"
#include "SSAKaynakNesnesi.h"
#include "SSAS�zdizimiNesnesi.h"
#include "T�rler.h"

namespace bad
{
	class SSAnlam;
	class Tasar�;
	class Kapsam;
	class ��levKapsam�;
	class B�t�nKapsam�;
	class G�vdeKapsam�;
	class Yaz�l�mKapsam�;
	class K�reselKapsam;

	class SSAAnlamsalNesnesi : public SSANesnesi
	{};

	class Tasar� : public SSAAnlamsalNesnesi
	{
	public:
		K�reselKapsam* d��Kapsam;
		liste<DerlemeBirimi> dosyalar;
	};

	class Kapsam : public SSAAnlamsalNesnesi
	{
	public:
		liste<Tan�mNesnesi> tan�mNesneleri;
		liste<Kapsam> altKapsamlar;
	};

	class ��levKapsam� : public Kapsam
	{};

	class B�t�nKapsam� : public Kapsam
	{};

	class G�vdeKapsam� : public Kapsam
	{};

	class Yaz�l�mKapsam� : public Kapsam
	{};

	class K�reselKapsam : public Kapsam
	{};
}

#endif

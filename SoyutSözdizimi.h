#ifndef SOYUT_S�ZD�Z�M�
#define SOYUT_S�ZD�Z�M�

#include "SSAAnlamsalNesnesi.h"
#include "Yasay�c�.h"

namespace bad
{
	struct ayr��t�rma_sonucu
	{
		const bool hata;
		const belirte�* hatal�Belirte�;
		const belirte�_t�r�* beklenenBelirte�;
		const Tasar�& tasar�;
	};

	ayr��t�rma_sonucu ayr��t�r(const liste<belirte�>& belirte�ler);
}

#endif

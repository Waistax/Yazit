#ifndef SOYUT_S�ZD�Z�M�
#define SOYUT_S�ZD�Z�M�

#include "Yasay�c�.h"

namespace bad
{
	struct s�zdizimi
	{
		s�zdizimi* �st_dizim;
		liste<s�zdizimi> alt_dizimler;
		const belirte�* s�z;

		s�zdizimi(s�zdizimi* �st_dizim, const belirte�* s�z);
	};

	s�zdizimi* ayr��t�r(const liste<belirte�>& belirte�ler);
}

#endif

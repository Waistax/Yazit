#ifndef YASIYICI
#define YASAYICI

#include <string>

namespace bad
{
	typedef std::string dize;

	struct belirte�_t�r�
	{
		dize ad;
		dize desen;
	};

	struct belirte�
	{
		belirte�_t�r� t�r;
		dize beden;
	};

	const belirte�_t�r� t�rler[1] =
	{
		{ "tan�mlay�c�", "^[a-zA-Z_][a-zA-Z_0-9]*" }
	};
}

#endif

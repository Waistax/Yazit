#ifndef YASIYICI
#define YASAYICI

#include <string>

namespace bad
{
	typedef std::string dize;

	struct belirteç_türü
	{
		dize ad;
		dize desen;
	};

	struct belirteç
	{
		belirteç_türü tür;
		dize beden;
	};

	const belirteç_türü türler[1] =
	{
		{ "tanýmlayýcý", "^[a-zA-Z_][a-zA-Z_0-9]*" }
	};
}

#endif

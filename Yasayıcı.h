#ifndef YASIYICI
#define YASAYICI

#include <string>
#include <vector>
#include <regex>

namespace bad
{
	typedef std::string dize;
	template<typename T>
	using liste = std::vector<T>;
	typedef std::regex desen;

	struct belirteç_türü
	{
		dize ad;
		desen desen;
	};

	struct belirteç
	{
		belirteç_türü tür;
		dize beden;
	};

	const belirteç_türü türler[1] =
	{
		{ "tanýmlayýcý", desen("^[a-zA-Z_][a-zA-Z_0-9]*") }
	};

	bool yasama(liste<belirteç>& liste, const dize& dize);
}

#endif

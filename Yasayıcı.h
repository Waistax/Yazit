#ifndef YASIYICI
#define YASAYICI

#include <string>
#include <vector>
#include <regex>

namespace bad
{
	using dize = std::string;
	template<typename T>
	using liste = std::vector<T>;
	using desen = std::regex;

	struct belirteç_türü
	{
		dize ad;
		desen desen;
	};

	struct belirteç
	{
		const belirteç_türü& tür;
		dize beden;

		belirteç(const belirteç_türü& tür, dize beden);
	};

	constexpr int TÜR_SAYISI = 1;

	const belirteç_türü türler[TÜR_SAYISI] =
	{
		{ "tanýmlayýcý", desen("^[a-zA-Z_][a-zA-Z_0-9]*") }
	};

	bool yasama(liste<belirteç>& liste, const dize& dize);
}

#endif

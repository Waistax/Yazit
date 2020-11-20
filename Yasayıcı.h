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

	constexpr int TÜR_SAYISI = 3;

	const belirteç_türü türler[TÜR_SAYISI] =
	{
		belirteç_türü{ dize{ "iþleç" }, desen{ "^(::|\\+\\+|--|\\.\\*|->\\*|->|<<|>>|<=|>=|==|!=|&&|\\|\\||\\*=|\\/=|%=|\\+=|-=|<<=|>>=|&=|\\^=|\\|=|\\(|\\)|\\[|\\]|!|~|\\+|-|&|\\*|\\?|:|\\.|,|\\/|%|<|>|\\^|\\||=)" } },
		belirteç_türü{ dize{ "sayý" }, desen{ "^[0-9]+(\\.[0-9]*)?" } },
		belirteç_türü{ dize{ "tanýmlayýcý" }, desen{ "^[a-zA-ZÇÐÝÖÞÜçðýöþü_][a-zA-ZÇÐÝÖÞÜçðýöþü_0-9]*" } }
	};

	bool yasama(liste<belirteç>& liste, const dize& satýr);

	bool yasama(liste<belirteç>& belirteçler, const liste<const dize>& satýrlar);
}

#endif

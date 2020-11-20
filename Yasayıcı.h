#ifndef YASIYICI
#define YASAYICI

#include "Türler.h"

namespace bad
{
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

	constexpr int TÜR_SAYISI = 5;

	const belirteç_türü türler[TÜR_SAYISI] =
	{
		belirteç_türü{ dize{ "noktalama" }, desen{ "^(::|\\+\\+|--|\\.\\*|->\\*|->|<<|>>|<=|>=|==|!=|&&|\\|\\||\\*=|\\/=|%=|\\+=|-=|<<=|>>=|&=|\\^=|\\|=|\\(|\\)|\\[|\\]|!|~|\\+|-|&|\\*|\\?|:|\\.|,|\\/|%|<|>|\\^|\\||=|;)" } },
		belirteç_türü{ dize{ "sayý" }, desen{ "^[0-9]+(\\.[0-9]*)?" } },
		belirteç_türü{ dize{ "dize" }, desen{ "^\".*\"" } },
		belirteç_türü{ dize{ "tanýmlayýcý" }, desen{ "^[a-zA-ZÇÐÝÖÞÜçðýöþü_][a-zA-ZÇÐÝÖÞÜçðýöþü_0-9]*" } }
	};

	bool yasama(liste<belirteç>& liste, const dize& satýr);

	bool yasama(liste<belirteç>& belirteçler, const liste<dize>& satýrlar);
}

#endif

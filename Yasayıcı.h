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

	struct belirte�_t�r�
	{
		dize ad;
		desen desen;
	};

	struct belirte�
	{
		const belirte�_t�r�& t�r;
		dize beden;

		belirte�(const belirte�_t�r�& t�r, dize beden);
	};

	constexpr int T�R_SAYISI = 5;

	const belirte�_t�r� t�rler[T�R_SAYISI] =
	{
		belirte�_t�r�{ dize{ "noktalama" }, desen{ "^(::|\\+\\+|--|\\.\\*|->\\*|->|<<|>>|<=|>=|==|!=|&&|\\|\\||\\*=|\\/=|%=|\\+=|-=|<<=|>>=|&=|\\^=|\\|=|\\(|\\)|\\[|\\]|!|~|\\+|-|&|\\*|\\?|:|\\.|,|\\/|%|<|>|\\^|\\||=|;)" } },
		belirte�_t�r�{ dize{ "say�" }, desen{ "^[0-9]+(\\.[0-9]*)?" } },
		belirte�_t�r�{ dize{ "dize" }, desen{ "^\".*\"" } },
		belirte�_t�r�{ dize{ "tan�mlay�c�" }, desen{ "^[a-zA-Z������������_][a-zA-Z������������_0-9]*" } }
	};

	bool yasama(liste<belirte�>& liste, const dize& sat�r);

	bool yasama(liste<belirte�>& belirte�ler, const liste<dize>& sat�rlar);
}

#endif

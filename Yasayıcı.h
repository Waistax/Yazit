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

	constexpr int T�R_SAYISI = 1;

	const belirte�_t�r� t�rler[T�R_SAYISI] =
	{
		{ "tan�mlay�c�", desen("^[a-zA-Z_][a-zA-Z_0-9]*") }
	};

	bool yasama(liste<belirte�>& liste, const dize& dize);
}

#endif

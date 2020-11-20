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

	struct belirte�_t�r�
	{
		dize ad;
		desen desen;
	};

	struct belirte�
	{
		belirte�_t�r� t�r;
		dize beden;
	};

	const belirte�_t�r� t�rler[1] =
	{
		{ "tan�mlay�c�", desen("^[a-zA-Z_][a-zA-Z_0-9]*") }
	};

	bool yasama(liste<belirte�>& liste, const dize& dize);
}

#endif

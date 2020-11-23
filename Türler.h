#ifndef TÜRLER
#define TÜRLER

#include <string>
#include <vector>
#include <regex>
#include <utility>
#include <memory>

namespace bad
{
	using dize = std::string;
	template<typename T>
	using liste = std::vector<T>;
	using desen = std::regex;
	template<typename T>
	using öziþ = std::unique_ptr<T>;
	template<typename T>
	using paiþ = std::shared_ptr<T>;
}

#endif

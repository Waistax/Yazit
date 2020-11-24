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

	template<class T, class...Args>
	öziþ<T> özgün(Args&&...args) {
		return öziþ<T>(new T(std::forward<Args>(args)...));
	}

	template<class T, class...Args>
	paiþ<T> paylaþýlan(Args&&...args) {
		return paiþ<T>(new T(std::forward<Args>(args)...));
	}
}

#endif

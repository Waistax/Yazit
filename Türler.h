#ifndef T�RLER
#define T�RLER

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
	using �zi� = std::unique_ptr<T>;
	template<typename T>
	using pai� = std::shared_ptr<T>;

	template<class T, class...Args>
	�zi�<T> �zg�n(Args&&...args) {
		return �zi�<T>(new T(std::forward<Args>(args)...));
	}

	template<class T, class...Args>
	pai�<T> payla��lan(Args&&...args) {
		return pai�<T>(new T(std::forward<Args>(args)...));
	}
}

#endif

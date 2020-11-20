#include "Yasayýcý.h"

#include <iostream>

int main()
{
	bad::liste<bad::belirteç> liste;
	bad::dize dize{ "tammerhaba cem.a=19.4 mantýk þablon 5 doðru ben 3.1419 cem (+9---3)" };
	
	//std::cout << (+9---3) << std::endl;

	if (bad::yasama(liste, dize))
	{
		std::cout << "Yasama tamamlandý! " << liste.size() << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->tür.ad << ": " << i->beden << std::endl;
	}

	else
		std::cout << "Yasamada bir problem oluþtu!" << std::endl;

	return 0;
}

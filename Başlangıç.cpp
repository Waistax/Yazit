#include "Yasay�c�.h"

#include <iostream>

int main()
{
	bad::liste<bad::belirte�> liste;
	bad::dize dize{ "tammerhaba cem.a=19.4 mant�k �ablon 5 do�ru ben 3.1419 cem (+9---3)" };
	
	//std::cout << (+9---3) << std::endl;

	if (bad::yasama(liste, dize))
	{
		std::cout << "Yasama tamamland�! " << liste.size() << std::endl;

		for (bad::liste<bad::belirte�>::iterator i{ liste.begin() }; i != liste.end(); i++)
		{
			std::cout << i->t�r.ad << ": " << i->beden << std::endl;
		}
	}

	else
	{
		std::cout << "Yasamada bir problem olu�tu!" << std::endl;
	}

	return 0;
}

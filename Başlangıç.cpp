#include "Yasay�c�.h"

#include <iostream>

int main()
{
	bad::liste<bad::belirte�> liste;
	bad::dize dize{ "merhaba ben cem" };
	
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

#include "Yasayıcı.h"

#include <iostream>

int main()
{
	bad::liste<bad::belirteç> liste;
	bad::dize dize{ "merhaba ben cem" };
	
	if (bad::yasama(liste, dize))
	{
		std::cout << "Yasama tamamlandı! " << liste.size() << std::endl;

		for (bad::liste<bad::belirteç>::iterator i{ liste.begin() }; i != liste.end(); i++)
		{
			std::cout << i->tür.ad << ": " << i->beden << std::endl;
		}
	}

	else
	{
		std::cout << "Yasamada bir problem oluştu!" << std::endl;
	}

	return 0;
}

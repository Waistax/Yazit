#include "Yasayıcı.h"

#include <iostream>

int main()
{
	bad::liste<bad::belirteç> liste;
	bad::liste<bad::dize> satırlar;

	satırlar.push_back("tam sayı1 = 4;");
	satırlar.push_back("kesir onda_biri = sayı1 / 10.0;");
	satırlar.push_back("yaz(\"Gerçekten de böyle bir girişime gerek var mıydı?\");");
	satırlar.push_back("özel söz = \"evet\";");

	if (bad::yasama(liste, satırlar))
		std::cout << "Yasama tamamlandı! " << liste.size() << std::endl;
	else
		std::cout << "Yasamada bir problem oluştu!" << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->tür.ad << ": " << i->beden << std::endl;

	return 0;
}

#include "Yasayıcı.h"

#include <iostream>
#include <fstream>

bool yasama(bad::liste<bad::belirteç>& belirteçler, const bad::dize& dosya_yolu)
{
	bad::liste<bad::dize> satırlar;
	std::ifstream dosya{ dosya_yolu };

	if (dosya.is_open())
	{
		bad::dize satır;
		while (std::getline(dosya, satır))
			satırlar.push_back(satır);
		dosya.close();
	}
	else
		return false;

	return bad::yasama(belirteçler, satırlar);
}

int main()
{
	bad::liste<bad::belirteç> liste;

	if (yasama(liste, "deneme.yazıt"))
		std::cout << "Yasama tamamlandı! " << liste.size() << std::endl;
	else
		std::cout << "Yasamada bir problem oluştu!" << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->tür.ad << ": " << i->beden << std::endl;

	return 0;
}

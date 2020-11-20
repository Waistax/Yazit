#include "Yasay�c�.h"

#include <iostream>
#include <fstream>

bool yasama(bad::liste<bad::belirte�>& belirte�ler, const bad::dize& dosya_yolu)
{
	bad::liste<bad::dize> sat�rlar;
	std::ifstream dosya{ dosya_yolu };

	if (dosya.is_open())
	{
		bad::dize sat�r;
		while (std::getline(dosya, sat�r))
			sat�rlar.push_back(sat�r);
		dosya.close();
	}
	else
		return false;

	return bad::yasama(belirte�ler, sat�rlar);
}

int main()
{
	bad::liste<bad::belirte�> liste;

	if (yasama(liste, "deneme.yaz�t"))
		std::cout << "Yasama tamamland�! " << liste.size() << std::endl;
	else
		std::cout << "Yasamada bir problem olu�tu!" << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->t�r.ad << ": " << i->beden << std::endl;

	return 0;
}

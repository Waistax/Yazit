#include "Yasay�c�.h"

#include <iostream>

int main()
{
	bad::liste<bad::belirte�> liste;
	bad::liste<bad::dize> sat�rlar;

	sat�rlar.push_back("tam say�1 = 4;");
	sat�rlar.push_back("kesir onda_biri = say�1 / 10.0;");
	sat�rlar.push_back("yaz(\"Ger�ekten de b�yle bir giri�ime gerek var m�yd�?\");");
	sat�rlar.push_back("�zel s�z = \"evet\";");

	if (bad::yasama(liste, sat�rlar))
		std::cout << "Yasama tamamland�! " << liste.size() << std::endl;
	else
		std::cout << "Yasamada bir problem olu�tu!" << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->t�r.ad << ": " << i->beden << std::endl;

	return 0;
}

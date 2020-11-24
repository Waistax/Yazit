#include "Yasay�c�.h"

#include <iostream>
#include <fstream>

int main()
{
	std::vector<const bad::Belirte�*> liste;
	auto dosyaYolu = new std::string("deneme.yaz�t");
	auto sonu� = yasama(liste, dosyaYolu);

	if (sonu�.dosyaHatas�)
		std::cout << "Dosya okunamad�! " << sonu�.dosyaYolu << std::endl;
	else if (sonu�.hata)
		std::cout << "Yasamada bir sorun olu�tu! Dosya: " << sonu�.dosyaYolu << " Sat�r: " << sonu�.sonSat�r << " S�tun: " << sonu�.sonS�tun << std::endl;
	else
		std::cout << "Yasama tamamland�! " << liste.size() << std::endl;

	for (auto i{ liste.begin() }; i != liste.end(); i++)
		std::cout << bad::T�R_ADLARI[(unsigned int)(*i)->t�r] << ": " << (*i)->beden << std::endl;

	return 0;
}

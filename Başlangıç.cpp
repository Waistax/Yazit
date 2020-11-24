#include "Yasayýcý.h"

#include <iostream>
#include <fstream>

int main()
{
	std::vector<const bad::Belirteç*> liste;
	auto dosyaYolu = new std::string("deneme.yazýt");
	auto sonuç = yasama(liste, dosyaYolu);

	if (sonuç.dosyaHatasý)
		std::cout << "Dosya okunamadý! " << sonuç.dosyaYolu << std::endl;
	else if (sonuç.hata)
		std::cout << "Yasamada bir sorun oluþtu! Dosya: " << sonuç.dosyaYolu << " Satýr: " << sonuç.sonSatýr << " Sütun: " << sonuç.sonSütun << std::endl;
	else
		std::cout << "Yasama tamamlandý! " << liste.size() << std::endl;

	for (auto i{ liste.begin() }; i != liste.end(); i++)
		std::cout << bad::TÜR_ADLARI[(unsigned int)(*i)->tür] << ": " << (*i)->beden << std::endl;

	return 0;
}

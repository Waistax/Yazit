#include "Yasayýcý.h"

#include <iostream>
#include <fstream>

int main()
{
	bad::liste<bad::belirteç> liste;
	bad::yasama_sonucu sonuç{ yasama(liste, "deneme.yazýt") };

	if (sonuç.dosyaHatasý)
		std::cout << "Dosya okunamadý! " << sonuç.dosyaYolu << std::endl;
	else if (sonuç.hata)
		std::cout << "Yasamada bir sorun oluþtu! Dosya: " << sonuç.dosyaYolu << " Satýr: " << sonuç.hataSatýrý << " Sütun: " << sonuç.hataSütunu << std::endl;
	else
		std::cout << "Yasama tamamlandý! " << liste.size() << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->tür.ad << ": " << i->beden << std::endl;

	return 0;
}

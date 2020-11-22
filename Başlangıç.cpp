#include "Yasay�c�.h"

#include <iostream>
#include <fstream>

int main()
{
	bad::liste<bad::belirte�> liste;
	bad::yasama_sonucu sonu�{ yasama(liste, "deneme.yaz�t") };

	if (sonu�.dosyaHatas�)
		std::cout << "Dosya okunamad�! " << sonu�.dosyaYolu << std::endl;
	else if (sonu�.hata)
		std::cout << "Yasamada bir sorun olu�tu! Dosya: " << sonu�.dosyaYolu << " Sat�r: " << sonu�.hataSat�r� << " S�tun: " << sonu�.hataS�tunu << std::endl;
	else
		std::cout << "Yasama tamamland�! " << liste.size() << std::endl;

		for (auto i{ liste.begin() }; i != liste.end(); i++)
			std::cout << i->t�r.ad << ": " << i->beden << std::endl;

	return 0;
}

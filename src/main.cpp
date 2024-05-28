/** 
* @B201210017
* @Sayılar txt dosyası oluşyurup oradaki sayıları ve sayıların basamaklarını düğümlerde tutup isteyen fonksiyonlarla işlem yapması.
* @1-A
* @1. ÖDEV
* @26.11.2023
* @MERVE GÜNAY merve.gunay3@ogr.sakarya.edu.tr
*/
#include "SayilarListesi.hpp"
#include <iostream>
#include <fstream>

int main() {
    // SayilarListesi ve dosya tanımlamaları
    SayilarListesi sayilarListesi;
    std::ifstream dosya("Sayilar.txt");
    int sayi;

    if (!dosya.is_open()) {
        std::cerr << "Dosya acilamadi!" << std::endl;
        return 1;
    }

    // Dosyadan sayıları okuyarak liste oluştur
    sayilarListesi.listeOlusturVeYazdir();

    int secim = 0;
    while (secim != 4) {
        std::cout << "Kontrol Menusu:\n";
        std::cout << "1. Tek basamaklari basa al\n";
        std::cout << "2. Basamaklari ters cevir\n";
        std::cout << "3. En buyuk sayiyi iceren basamagi listeden cikar\n";
        std::cout << "4. Programdan cik\n";
        std::cout << "Seciminiz: ";
        std::cin >> secim;

        switch (secim) {
        case 1:
            sayilarListesi.tekBasamaklariBasaAl();
            break;
        case 2:
            sayilarListesi.basamaklariTersCevir();
            break;
        case 3:
            sayilarListesi.enBuyukDugumuCikar();
            break;
        case 4:
            std::cout << "Programdan cikiliyor...\n";
            break;
        default:
            std::cout << "Gecersiz secim! Tekrar deneyin.\n";
        }

        if (secim != 4) {
            sayilarListesi.sayilariYazdir();
        }
    }

    // Programın sonunda değişmiş veriyi dosyaya yazdır
    std::ofstream dosyaYaz("Sayilar.txt");

    if (dosyaYaz.is_open()) {
        Dugum* temp = sayilarListesi.getHead();
        while (temp != nullptr) {
            Basamak* basamaklar = temp->sayiListesi->getBasamaklar();
            while (basamaklar != nullptr) {
                dosyaYaz << basamaklar->veri;
                basamaklar = basamaklar->next;
            }
            dosyaYaz << '\n';  // Her sayı arasına boşluk koymadan yeni satıra geç
            temp = temp->next;
        }
        dosyaYaz.close();
    } else {
        std::cerr << "Dosya acilamadi!" << std::endl;
    }

    return 0;
}

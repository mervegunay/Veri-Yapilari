/** 
* @B201210017
* @Sayýlar txt dosyasý oluþyurup oradaki sayýlarý ve sayýlarýn basamaklarýný düðümlerde tutup isteyen fonksiyonlarla iþlem yapmasý.
* @1-A
* @1. ÖDEV
* @26.11.2023
* @MERVE GÜNAY merve.gunay3@ogr.sakarya.edu.tr
*/
#ifndef SAYI_HPP
#define SAYI_HPP

#include "Basamak.hpp"

class Sayi {
private:
    Basamak* basamaklar;

public:
    Sayi();
    void basamakEkle(int data);
    void basamaklariYazdir();
    void basamaklariTersCevir();
    Basamak* getBasamaklar();
    void setBasamaklar(Basamak* yeniBasamaklar);
};

#endif


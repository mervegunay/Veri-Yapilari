/** 
* @B201210017
* @Sayýlar txt dosyasý oluþyurup oradaki sayýlarý ve sayýlarýn basamaklarýný düðümlerde tutup isteyen fonksiyonlarla iþlem yapmasý.
* @1-A
* @1. ÖDEV
* @26.11.2023
* @MERVE GÜNAY merve.gunay3@ogr.sakarya.edu.tr
*/
#ifndef SAYILARLISTESI_HPP
#define SAYILARLISTESI_HPP

#include "Dugum.hpp"

class SayilarListesi {
private:
    Dugum* head;

public:
    SayilarListesi();
    Dugum* getHead();
    void sayiEkle(Sayi* sayi);
    void sayilariYazdir();
    void listeOlusturVeYazdir();
    void tekBasamaklariBasaAl();
    void basamaklariTersCevir();
    void enBuyukDugumuCikar();
    void ekranCiktisiOlustur();
};

#endif


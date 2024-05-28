/** 
* @B201210017
* @Say�lar txt dosyas� olu�yurup oradaki say�lar� ve say�lar�n basamaklar�n� d���mlerde tutup isteyen fonksiyonlarla i�lem yapmas�.
* @1-A
* @1. �DEV
* @26.11.2023
* @MERVE G�NAY merve.gunay3@ogr.sakarya.edu.tr
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


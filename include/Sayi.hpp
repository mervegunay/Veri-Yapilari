/** 
* @B201210017
* @Say�lar txt dosyas� olu�yurup oradaki say�lar� ve say�lar�n basamaklar�n� d���mlerde tutup isteyen fonksiyonlarla i�lem yapmas�.
* @1-A
* @1. �DEV
* @26.11.2023
* @MERVE G�NAY merve.gunay3@ogr.sakarya.edu.tr
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


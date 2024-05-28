/** 
* @B201210017
* @Sayýlar txt dosyasý oluþyurup oradaki sayýlarý ve sayýlarýn basamaklarýný düðümlerde tutup isteyen fonksiyonlarla iþlem yapmasý.
* @1-A
* @1. ÖDEV
* @26.11.2023
* @MERVE GÜNAY merve.gunay3@ogr.sakarya.edu.tr
*/
#ifndef DUGUM_HPP
#define DUGUM_HPP

#include "Sayi.hpp"

class Dugum {
public:
    Sayi* sayiListesi;
    Dugum* next;

    Dugum(Sayi* sayi);
};

#endif


/** 
* @B201210017
* @Sayılar txt dosyası oluşyurup oradaki sayıları ve sayıların basamaklarını düğümlerde tutup isteyen fonksiyonlarla işlem yapması.
* @1-A
* @1. ÖDEV
* @26.11.2023
* @MERVE GÜNAY merve.gunay3@ogr.sakarya.edu.tr
*/
#include "Sayi.hpp"
#include <iostream>

Sayi::Sayi() : basamaklar(nullptr) {}

void Sayi::basamakEkle(int data) {
    Basamak* yeniBasamak = new Basamak(data);
    yeniBasamak->next = basamaklar;
    basamaklar = yeniBasamak;
}

void Sayi::basamaklariYazdir() {
    Basamak* temp = basamaklar;
    while (temp != nullptr) {
        std::cout << temp->veri << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

void Sayi::basamaklariTersCevir() {
    Basamak* prev = nullptr;
    Basamak* current = basamaklar;
    Basamak* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    basamaklar = prev;
}

Basamak* Sayi::getBasamaklar() {
    return basamaklar;
}

void Sayi::setBasamaklar(Basamak* yeniBasamaklar) {
    basamaklar = yeniBasamaklar;
}

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
#include <iomanip>

SayilarListesi::SayilarListesi() : head(nullptr) {}

Dugum* SayilarListesi::getHead() {
    return head;
}

void SayilarListesi::sayiEkle(Sayi* sayi) {
    Dugum* yeniDugum = new Dugum(sayi);
    if (head == nullptr) {
        head = yeniDugum;
    } else {
        Dugum* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = yeniDugum;
    }
}

void SayilarListesi::sayilariYazdir() {
    Dugum* temp = head;
    while (temp != nullptr) {
        temp->sayiListesi->basamaklariYazdir();
        temp = temp->next;
    }
}

void SayilarListesi::listeOlusturVeYazdir() {
    std::ifstream dosya("Sayilar.txt");
    int sayi;

    if (dosya.is_open()) {
        while (dosya >> sayi) {
            Sayi* yeniSayi = new Sayi();
            while (sayi > 0) {
                int basamak = sayi % 10;
                yeniSayi->basamakEkle(basamak);
                sayi /= 10;
            }
            sayiEkle(yeniSayi);
        }
        dosya.close();
    } else {
        std::cerr << "Dosya acilamadi!" << std::endl;
        return;
    }

    ekranCiktisiOlustur();
}

void SayilarListesi::tekBasamaklariBasaAl() {
    Dugum* temp = head;
    while (temp != nullptr) {
        Basamak* basamaklar = temp->sayiListesi->getBasamaklar();
        Basamak* tempBasamaklar = basamaklar;
        Basamak* prev = nullptr;
        Basamak* tail = nullptr;

        while (tempBasamaklar != nullptr) {
            Basamak* next = tempBasamaklar->next;

            if (tempBasamaklar->veri % 2 == 1) {
                if (prev != nullptr) {
                    prev->next = tempBasamaklar->next;
                    tempBasamaklar->next = basamaklar;
                    basamaklar = tempBasamaklar;
                }
            } else {
                if (tail == nullptr) {
                    tail = tempBasamaklar;
                }
                prev = tempBasamaklar;
            }
            tempBasamaklar = next;
        }

        temp->sayiListesi->setBasamaklar(basamaklar);
        temp = temp->next;
    }
    ekranCiktisiOlustur();
}

void SayilarListesi::basamaklariTersCevir() {
    Dugum* temp = head;
    while (temp != nullptr) {
        temp->sayiListesi->basamaklariTersCevir();
        temp = temp->next;
    }
    ekranCiktisiOlustur();
}

void SayilarListesi::enBuyukDugumuCikar() {
    Dugum* current = head;
    Dugum* enBuyukDugum = head;
    Dugum* prev = nullptr;
    Dugum* enBuyukPrev = nullptr;

    int enBuyukSayi = 0; // En büyük sayıyı saklamak için bir değişken
    while (current != nullptr) {
        Basamak* basamaklar = current->sayiListesi->getBasamaklar();
        Basamak* temp = basamaklar;

        int tempSayi = 0; // Geçici sayıyı saklamak için bir değişken

        while (temp != nullptr) {
            tempSayi = (tempSayi * 10) + temp->veri; // Sayıyı elde etmek için basamakları birleştir
            temp = temp->next;
        }

        if (tempSayi > enBuyukSayi) {
            enBuyukSayi = tempSayi;
            enBuyukPrev = prev;
            enBuyukDugum = current;
        }

        prev = current;
        current = current->next;
    }

    if (enBuyukPrev != nullptr) {
        enBuyukPrev->next = enBuyukDugum->next;
    } else {
        head = enBuyukDugum->next;
    }

    delete enBuyukDugum;
    ekranCiktisiOlustur();
}

void SayilarListesi::ekranCiktisiOlustur() {
    Dugum* temp = head;

    while (temp != nullptr) {
        std::cout << "##########" << std::endl;
        std::cout << "#" << std::setw(8) << temp << " #" << std::endl;
        std::cout << "#--------#" << std::endl;

        Basamak* basamaklar = temp->sayiListesi->getBasamaklar();

        while (basamaklar != nullptr) {
            std::cout << "#" << std::setw(10) << basamaklar->veri;
            basamaklar = basamaklar->next;
        }
        std::cout << "#" << std::endl;

        basamaklar = temp->sayiListesi->getBasamaklar();
        while (basamaklar != nullptr) {
            std::cout << "#  " << std::setw(5) << basamaklar;
            basamaklar = basamaklar->next;
        }
        std::cout << "#" << std::endl;

        std::cout << "##########" << std::endl << std::endl;

        temp = temp->next;
    }
}

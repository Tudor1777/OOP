#include <iostream>
#include "articol.h"
#include "client.h"
#include "cos.h"
#include "magazin.h"
using namespace std;


int articol :: nr_total = 0;
int main()
{
    magazin m;
    tricou tricou1(100, "tricou 1", "alb", "bumbac", 200, 100, 300), tricou2(400, "tricou 2", "negru", "bumbac", 30, 10, 15);
    hanorac hanorac1(500, "hanorac 1", "alb", "bumbac", 100, 150, 100), hanorac2(650, "hanorac 2", "negru", "bumbac", 10, 15, 20);
    camasa camasa1(400, "camasa 1", "alb", "in", 50, 50, 50);
    geaca geaca1(1200, "geaca de piele", "negru", "piele naturala", 20, 30, 20, "da");
    articol :: veziNrArticole();
    
    // m.adaugaHanorac(hanorac1);
    // m.adaugaHanorac(hanorac2);
    // m.adaugaCamasa(camasa1);
    // m.adaugaGeaca(geaca1);
    // m.meniu();
    m.adaugaArticol(tricou1);
    m.adaugaArticol(tricou2);
    m.adaugaArticol(hanorac1);
    m.adaugaArticol(hanorac2);
    m.adaugaArticol(camasa1);
    m.adaugaArticol(geaca1);
    m.meniu2();
    // tricou1.reducere(50);
    // tricou1.afisareArticol(tricou1);
    return 0;
}
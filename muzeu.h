//
//

#ifndef PROIECT_POO_MUZEU_H
#define PROIECT_POO_MUZEU_H

#include <iostream>
#include <vector>
#include "colectie.h"

template <typename A, typename B>
class muzeu {
    std::vector<colectie> colectii;
    std::string nume;
    A bilet;
    B buget; //bugetul rezervat achizitiei de opere de arta

public:
    friend std::ostream &operator<<(std::ostream &os, const muzeu<int,int> &muzeu);

    muzeu(const std::string &nume, A bilet);

    void setBilet(A bilet);

    void adauga(colectie const &colectie);

    static void program ();

    void cost_bilete () const;

    void colectie_random ();

    void proces_licitatie (int cost_initial);

    void licitatii ();

    void buget_plus ();
};

#endif //PROIECT_POO_MUZEU_H

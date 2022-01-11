//
//

#ifndef PROIECT_POO_MUZEU_H
#define PROIECT_POO_MUZEU_H

#include <iostream>
#include <vector>
#include "colectie.h"

class muzeu {
    std::vector<colectie> colectii;
    std::string nume;
    int bilet;

public:
    friend std::ostream &operator<<(std::ostream &os, const muzeu &muzeu);

    muzeu(const std::string &nume, int bilet);

    void setBilet(int bilet);

    void adauga(colectie const &colectie);

    static void program ();

    void cost_bilete () const;

    void colectie_random ();
};

#endif //PROIECT_POO_MUZEU_H

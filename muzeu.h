//
//

#ifndef PROIECT_POO_MUZEU_H
#define PROIECT_POO_MUZEU_H

#include <iostream>
#include <vector>
#include "colectie.h"

class muzeu {
    std::vector<colectie> colectii;
    int bilet;

public:
    friend std::ostream &operator<<(std::ostream &os, const muzeu &muzeu);

    void setBilet(int bilet);

    void adauga(colectie const &colectie);

    void program ();

    void cost_bilete ();
};

#endif //PROIECT_POO_MUZEU_H

//
//

#ifndef PROIECT_POO_COLECTIE_H
#define PROIECT_POO_COLECTIE_H

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "opera_arta.h"

class colectie {
    std::string titlu;
    int cod;
    std::vector<std::shared_ptr<opera_arta>> opere;

public:
    friend std::ostream &operator<<(std::ostream &os, const colectie &colectie);

    void adauga(opera_arta const &opera_arta);

    colectie(const std::string &titlu, int cod);

    colectie(const std::string &titlu, int cod, const std::vector<std::shared_ptr<opera_arta>> &opere);

    colectie(const colectie &copie);

    colectie &operator=(const colectie &copie);

    ~colectie() = default;

    int cautare (std::shared_ptr<opera_arta> o);

    void suvenir_col(std::shared_ptr<opera_arta> o);
};

#endif //PROIECT_POO_COLECTIE_H

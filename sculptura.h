//
//

#ifndef PROIECT_POO_SCULPTURA_H
#define PROIECT_POO_SCULPTURA_H

#include <iostream>
#include <string>
#include "opera_arta.h"

class sculptura : public opera_arta {

public:
    friend std::ostream &operator<<(std::ostream &os, const sculptura &sculptura);

    sculptura(const std::string &titlu, const std::string &artist, const std::string &categorie,
              const std::string &stil, int anPub, bool afisare);
};

#endif //PROIECT_POO_SCULPTURA_H

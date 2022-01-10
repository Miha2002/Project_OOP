//
//

#ifndef PROIECT_POO_SCULPTURA_H
#define PROIECT_POO_SCULPTURA_H

#include <iostream>
#include <string>
#include "opera_arta.h"

class sculptura : public opera_arta {

public:
    sculptura(const std::string &titlu, const std::string &artist, const std::string &categorie,
              const std::string &stil, int anPub, bool afisare);

    std::shared_ptr<opera_arta> clone() const override;

protected:
    void afis(std::ostream& os) const override;
};

#endif //PROIECT_POO_SCULPTURA_H

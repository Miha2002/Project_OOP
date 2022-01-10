//
//

#ifndef PROIECT_POO_SCULPTURA_H
#define PROIECT_POO_SCULPTURA_H

#include <iostream>
#include <string>
#include "opera_arta.h"

class sculptura : public opera_arta {
    std::string material;
    int greutate;

protected:
    void afis(std::ostream& os) const override;

public:
    sculptura(const std::string &titlu, const std::string &artist, const std::string &stil,
              int anPub, bool afisare, const std::string &material, int greutate);

    std::shared_ptr<opera_arta> clone() const override;

    void descriere() override;
};

#endif //PROIECT_POO_SCULPTURA_H

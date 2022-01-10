//
//

#ifndef PROIECT_POO_PICTURA_H
#define PROIECT_POO_PICTURA_H

#include <iostream>
#include <string>
#include "opera_arta.h"

class pictura : public opera_arta {
    std::string tip_vopsea;
    int lungime;
    int latime;

protected:
    void afis(std::ostream& os) const override;

public:
    pictura(const std::string &titlu, const std::string &artist, const std::string &stil,
            int anPub, bool afisare, const std::string &tipVopsea, int lungime, int latime);

    std::shared_ptr<opera_arta> clone() const override;

    void descriere() override;
};

#endif //PROIECT_POO_PICTURA_H

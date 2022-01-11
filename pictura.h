//
//

#ifndef PROIECT_POO_PICTURA_H
#define PROIECT_POO_PICTURA_H

#include <iostream>
#include <string>
#include "opera_arta.h"

class pictura : public opera_arta {
    std::string tip_vopsea;
    int inaltime; //in cm
    int latime; //in cm

protected:
    void afis(std::ostream& os) const override;

public:
    pictura(const std::string &titlu, const std::string &artist, const std::string &stil,
            int anPub, bool afisare, const std::string &tipVopsea, int inaltime, int latime);

    std::shared_ptr<opera_arta> clone() const override;

    ~pictura() override;;

    void descriere() override;

    void suvenir() override;
};

#endif //PROIECT_POO_PICTURA_H

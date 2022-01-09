//
//

#ifndef PROIECT_POO_PICTURA_H
#define PROIECT_POO_PICTURA_H

#include <iostream>
#include <string>

class pictura : public opera_arta {

public:
    pictura(const std::string &titlu, const std::string &artist, const std::string &categorie, const std::string &stil,
            int anPub, bool afisare);
    std::shared_ptr<opera_arta> clone() const override;
};

#endif //PROIECT_POO_PICTURA_H

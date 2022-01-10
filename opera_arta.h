//
//

#ifndef PROIECT_POO_OPERA_ARTA_H
#define PROIECT_POO_OPERA_ARTA_H

#include <string>
#include <iostream>
#include <memory>

class opera_arta {
protected:
    std::string titlu;
    std::string artist; //poate sa fie 'necunoscut'
    std::string stil;
    int an_pub;
    bool afisare;
    virtual void afis(std::ostream& os) const;

public:
    friend std::ostream &operator<<(std::ostream &os, const opera_arta &arta);

    opera_arta(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub, bool afisare);

    virtual std::shared_ptr<opera_arta> clone() const = 0;

    virtual void descriere() = 0;

    virtual void suvenir() = 0;
};

#endif //PROIECT_POO_OPERA_ARTA_H

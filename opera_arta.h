//
//

#ifndef PROIECT_POO_OPERA_ARTA_H
#define PROIECT_POO_OPERA_ARTA_H

#include <string>
#include <iostream>
#include <memory>

class opera_arta {
    static int id_max;
    const int id;

protected:
    std::string titlu;
    std::string artist; //poate sa fie 'necunoscut'
    std::string stil;
    int an_pub;
    bool afisare;

public:
    friend std::ostream &operator<<(std::ostream &os, const opera_arta &arta);

    opera_arta(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub, bool afisare);

    opera_arta(const opera_arta& copie);

    const std::string &getTitlu() const;

    opera_arta& operator =(const opera_arta& copie);

    virtual std::shared_ptr<opera_arta> clone() const = 0;

    virtual ~opera_arta() = default;

    virtual void descriere() = 0;

    virtual void suvenir() = 0;

    static int getIdMax();
};

#endif //PROIECT_POO_OPERA_ARTA_H

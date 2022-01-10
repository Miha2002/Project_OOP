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
    std::string artist;
    std::string stil;
    int an_pub;
    bool afisare;
    virtual void afis(std::ostream& os) const;

public:
    friend std::ostream &operator<<(std::ostream &os, const opera_arta &arta);

    opera_arta(const std::string &titlu, const std::string &artist, const std::string &categorie,
               const std::string &stil, int anPub, bool afisare);

    void status ();

    virtual std::shared_ptr<opera_arta> clone() const;

};

#endif //PROIECT_POO_OPERA_ARTA_H

//
//
#include "opera_arta.h"
#include "eroare_opera.h"

std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
    os << "titlu: " << arta.titlu << " artist: " << arta.artist << " stil: "
       << arta.stil << " an_pub: " << arta.an_pub << " afisare: " << arta.afisare;
    return os;
}
opera_arta::~opera_arta() {
    std::cout << "destructor opera " << titlu << "\n";
}

opera_arta::opera_arta(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub,
                       bool afisare) : titlu(titlu), artist(artist), stil(stil), an_pub(anPub), afisare(afisare) {

    if(stil == "tipografie" || stil == "pop")
        throw eroare_stil();
    if(an_pub<1500)
        throw eroare_an();
}

void opera_arta::afis(std::ostream &os) const {
    os << "titlu: " << titlu << "artist: " << artist << "stil: " << stil
       << "an_pub: " << an_pub << "afisare: " << afisare;
}


//
//
#include "opera_arta.h"

std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
    os << "titlu: " << arta.titlu << " artist: " << arta.artist << " stil: "
       << arta.stil << " an_pub: " << arta.an_pub << " afisare: " << arta.afisare;
    return os;
}

opera_arta::opera_arta(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub,
                       bool afisare) : titlu(titlu), artist(artist), stil(stil), an_pub(anPub), afisare(afisare) {}

void opera_arta::status() {
    if (afisare == 1)
        std::cout<< "Opera '"<< titlu << "' este afisata\n";
    else
        std::cout<< "Opera '"<< titlu << "' nu este afisata\n";
}

void opera_arta::afis(std::ostream &os) const {
    os << "titlu: " << titlu << "artist: " << artist << "stil: " << stil
       << "an_pub: " << an_pub << "afisare: " << afisare;
}


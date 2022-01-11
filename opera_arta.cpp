//
//
#include "opera_arta.h"
#include "erori.h"


std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
    os << "titlu: " << arta.titlu << " artist: " << arta.artist << " stil: "
       << arta.stil << " an_pub: " << arta.an_pub << " afisare: " << arta.afisare;
    return os;
}
opera_arta::~opera_arta() {
    std::cout << "destructor opera " << titlu << "\n";
}

int opera_arta::id_max = 1;

opera_arta::opera_arta(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub,
                       bool afisare) : titlu(titlu), artist(artist), stil(stil), an_pub(anPub), afisare(afisare) {

    id_max++;
    if(stil == "tipografie" || stil == "pop")
        throw eroare_stil();
    if(an_pub<1200)
        throw eroare_an();
}

int opera_arta::getIdMax(){
    return id_max;
}

void opera_arta::afis(std::ostream &os) const {
    os << "titlu: " << titlu << "artist: " << artist << "stil: " << stil
       << "an_pub: " << an_pub << "afisare: " << afisare;
}


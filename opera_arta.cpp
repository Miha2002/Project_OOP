//
//
#include "opera_arta.h"
#include "erori.h"


std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
    os << "titlu: " << arta.titlu << ", artist: " << arta.artist << ", stil: "
       << arta.stil << ", an_pub: " << arta.an_pub << ", afisare: " << arta.afisare;
    return os;
}

int opera_arta::id_max = 1;

opera_arta::opera_arta(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub,
                       bool afisare) : titlu(titlu), artist(artist), stil(stil), an_pub(anPub), afisare(afisare), id(id_max) {

    id_max++;
    if(stil == "tipografie" || stil == "pop")
        throw eroare_stil();
    if(an_pub<1200)
        throw eroare_an();
}

opera_arta::opera_arta(const opera_arta &copie): id(id_max), titlu(copie.titlu), artist(copie.artist),
                                           stil(copie.stil), an_pub(copie.an_pub), afisare(copie.afisare){
    id_max++;
}

opera_arta &opera_arta::operator=(const opera_arta &copie) {
    this->titlu = copie.titlu;
    this->artist = copie.artist;
    this->stil = copie.stil;
    this->an_pub = copie.an_pub;
    this->afisare = copie.afisare;
    return *this;
}

int opera_arta::getIdMax(){
    return id_max;
}

const std::string &opera_arta::getTitlu() const {
    return titlu;
}


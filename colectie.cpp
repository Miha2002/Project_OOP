//
//
#include "colectie.h"

std::ostream &operator<<(std::ostream &os, const colectie &colectie) {
    os << "titlu: " << colectie.titlu << ", cod: " << colectie.cod << ", opere: " << "\n";
    for(const auto &opera_arta : colectie.opere)
        os << "\t" << opera_arta;
    return os;
}

void colectie::adauga(const opera_arta &opera_arta_) {
    opere.push_back(opera_arta_.clone());
}

colectie::colectie(const std::string &titlu, int cod) : titlu(titlu), cod(cod) {}

colectie::colectie(const std::string &titlu, int cod, const std::vector<std::shared_ptr<opera_arta>> &opere) : titlu(
        titlu), cod(cod), opere(opere) {}

colectie::colectie(const colectie &copie) {
    this->titlu = copie.titlu;
    this->cod   = copie.cod;
    this->opere = copie.opere;
}

colectie &colectie::operator=(const colectie &copie) {
    if(this != &copie) {
        this->titlu = copie.titlu;
        this->cod   = copie.cod;
        this->opere = copie.opere;
    }
    return *this;
}

colectie::~colectie() {
    std::cout << "destructor colectie\n";
}

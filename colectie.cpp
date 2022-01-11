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

int colectie::nr_colectii = 0;

colectie::colectie(const std::string &titlu, int cod) : titlu(titlu), cod(cod) {
    nr_colectii++;
}

colectie::colectie(const std::string &titlu, int cod, const std::vector<std::shared_ptr<opera_arta>> &opere) : titlu(
        titlu), cod(cod), opere(opere) {}

colectie::colectie(const colectie &copie) : titlu(copie.titlu), cod(copie.cod) {
    for(const auto &opera_arta: copie.opere)
        opere.push_back(opera_arta->clone());
}

colectie &colectie::operator=(const colectie &copie) {
    if(this != &copie) {
        this->titlu = copie.titlu;
        this->cod   = copie.cod;
        auto opere_noi = std::vector <std::shared_ptr<opera_arta>>();
        for(const auto &opera_arta: copie.opere) {
            opere_noi.push_back(opera_arta->clone());
        }
        this->opere = opere_noi;
    }
    return *this;
}

colectie::~colectie() {
    std::cout << "destructor colectie\n";
}


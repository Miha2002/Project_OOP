//
// Created by Asus tuf on 1/9/2022.
//

#ifndef PROIECT_POO_COLECTIE_H
#define PROIECT_POO_COLECTIE_H
class colectie {
    std::string titlu;
    int cod;
    std::vector<opera_arta> opere;


public:
    friend std::ostream &operator<<(std::ostream &os, const colectie &colectie) {
        os << "titlu: " << colectie.titlu << ", cod: " << colectie.cod << ", opere: " << "\n";
        for(const auto &opera_arta : colectie.opere)
            os << "\t" << opera_arta;
        return os;
    }

    void adauga(opera_arta const &opera_arta) {
        opere.push_back(opera_arta);
    }

    colectie(const std::string &titlu, int cod) : titlu(titlu), cod(cod) {}

    colectie(const colectie &copie) {
        this->titlu = copie.titlu;
        this->cod   = copie.cod;
        this->opere = copie.opere;
    }

    colectie &operator=(const colectie &copie) {
        if(this != &copie) {
            this->titlu = copie.titlu;
            this->cod   = copie.cod;
            this->opere = copie.opere;
        }
        return *this;
    }

    ~colectie() {
        std::cout << "destructor colectie\n";
    }
};
#endif //PROIECT_POO_COLECTIE_H

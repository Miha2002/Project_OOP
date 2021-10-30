//Aplicatie Muzeu de arta

#include <iostream>
#include <string>
#include <vector>

class opera_arta {
    std::string titlu;
    std::string artist;
    std::string categorie;
    std::string stil;
    int an_publicare;

public:
    opera_arta(const std::string &titlu, const std::string &artist, const std::string &categorie,
               const std::string &stil, int anPublicare) : titlu(titlu), artist(artist), categorie(categorie),
                                                           stil(stil), an_publicare(anPublicare) {}

    friend std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
        os << "titlu: " << arta.titlu << " artist: " << arta.artist << " categorie: " << arta.categorie << " stil: "
           << arta.stil << " an_publicare: " << arta.an_publicare;
        return os;
    }
};

class colectie {
    std::string titlu;
    int cod;
    std::vector<opera_arta> opere;

public:
    void adauga(opera_arta opera_arta) {
        opere.push_back(opera_arta);
    }

    colectie(const std::string &titlu, int cod) : titlu(titlu), cod(cod) {}

    colectie(const colectie& copie) {
        this->titlu = copie.titlu;
        this->cod   = copie.cod;
        this->opere = copie.opere;
    }

    colectie& operator=(const colectie& copie) {
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

    friend std::ostream &operator<<(std::ostream &os, const colectie &colectie) {
        os << "titlu: " << colectie.titlu << " cod: " << colectie.cod << " opere: ";
        for(const auto& opera_arta : colectie.opere)
            os << opera_arta;
        return os;
    }

};

class muzeu {
    std::vector<colectie> colectii;

public:
    void adauga(colectie colectie) {
        colectii.push_back(colectie);
    }

    friend std::ostream &operator<<(std::ostream &os, const muzeu &muzeu) {
        os << "colectii: ";
        for(const auto& colectie : muzeu.colectii)
            os << colectie;
        return os;
    }
};


int main (){
    muzeu M;
    colectie C1{"Arta contemporana",1};
    opera_arta opera1{"Toamna","Miha","pictura","photorealism", 2020};
    opera_arta opera2{"Vara","Miha","sculptura","photorealism", 2021};
    opera_arta opera3{"Primavara","Miha","desen","photorealism", 2021};
    C1.adauga(opera1);
    C1.adauga(opera2);
    M.adauga(C1);
    return 0;
}
//Aplicatie Muzeu de arta

#include <iostream>
#include <string>
#include <vector>

class opera_arta {
    std::string titlu;
    std::string artist;
    std::string categorie;
    std::string stil;
    int an_pub;

public:
    friend std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
        os << "titlu: " << arta.titlu << ", artist: " << arta.artist << ", categorie: " << arta.categorie << ", stil: "
           << arta.stil << ", an_pub: " << arta.an_pub << "\n";
        return os;
    }

    opera_arta(const std::string &titlu, const std::string &artist, const std::string &categorie,
               const std::string &stil, int anPublicare) : titlu(titlu), artist(artist), categorie(categorie),
                                                           stil(stil), an_pub(anPublicare) {}
};

class colectie {
    std::string titlu;
    int cod;
    std::vector<opera_arta> opere;

public:
    friend std::ostream &operator<<(std::ostream &os, const colectie &colectie) {
        os << "titlu: " << colectie.titlu << ", cod: " << colectie.cod << ", opere: " << "\n";
        for(const auto& opera_arta : colectie.opere)
            os << "\t" << opera_arta;
        return os;
    }

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
};

class muzeu {
    std::vector<colectie> colectii;

public:
    friend std::ostream &operator<<(std::ostream &os, const muzeu &muzeu) {
        os << "colectii: " << "\n";
        for(const auto& colectie : muzeu.colectii)
            os << colectie;
        return os;
    }

    void adauga(colectie colectie) {
        colectii.push_back(colectie);
    }
};


int main (){
    muzeu M;
    colectie C1{"Arta contemporana",1};
    colectie C2{"Photorealism",2};
    opera_arta o1{"Toamna","Miha","pictura","photorealism", 2020};
    opera_arta o2{"Vara","Miha","sculptura","photorealism", 2021};
    opera_arta o3{"Primavara","Miha","desen","photorealism", 2021};
    opera_arta o4{"Lala","Miha","desen","photorealism", 2021};
    C1.adauga(o1);
    C1.adauga(o2);
    C2.adauga(o3);
    C2.adauga(o4);
    M.adauga(C1);
    M.adauga(C2);
    std::cout << M;
    return 0;
}
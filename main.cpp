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
    colectie C1{"Din trecut",1};
    colectie C2{"Arta contemporana",2};
    opera_arta o1{"Camp cu maci","Claude Monet","pictura","impresionism", 1870};
    opera_arta o2{"Floarea soarelui","Vincent Van Gogh","pictura","post-impresionism", 1888};
    opera_arta o3{"Pieta","Michelangelo Buonarroti","sculptura","renascentism", 1499};
    opera_arta o4{"Cainele balon","Jeff Koons","sculptura","arta contemporana", 1993};
    opera_arta o5{"Flumequin","Damien Hirst","pictura","arta contemporana", 2007};
    C1.adauga(o1);
    C1.adauga(o2);
    C1.adauga(o3);
    C2.adauga(o4);
    C2.adauga(o5);
    M.adauga(C1);
    M.adauga(C2);
    std::cout << M;
    return 0;
}
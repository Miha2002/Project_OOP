//Aplicatie Muzeu de arta

#include <string>
#include <vector>

class opera_arta{
    std::string titlu;
    std::string artist;
    std::string categorie;
    std::string stil;
    int an_publicare;
public:
    opera_arta(const std::string &titlu, const std::string &artist, const std::string &categorie,
               const std::string &stil, int anPublicare) : titlu(titlu), artist(artist), categorie(categorie),
                                                           stil(stil), an_publicare(anPublicare) {}
};

class colectie{
    std::string titlu;
    int cod;
    std::vector<opera_arta> opere;

public:

    void adauga(opera_arta opera_arta){
        opere.push_back(opera_arta);
    }

    colectie(const std::string &titlu, int cod) : titlu(titlu), cod(cod) {}

};

class muzeu{
    std::vector<colectie> colectii;

public:
    void adauga(colectie colectie){
        colectii.push_back(colectie);
    }
};


int main (){
    muzeu M;
    colectie C1{"Arta neinteleasa",1};
    opera_arta opera1{"Toamna","Miha","pictura","photorealism", 2020};
    opera_arta opera2{"Vara","Miha","sculptura","photorealism", 2021};
    C1.adauga(opera1);
    C1.adauga(opera2);
    M.adauga(C1);
    return 0;
}
//
//

#ifndef PROIECT_POO_OPERA_ARTA_H
#define PROIECT_POO_OPERA_ARTA_H
class opera_arta {
    std::string titlu;
    std::string artist;
    std::string stil;
    int an_pub;
    bool afisare;

public:
    friend std::ostream &operator<<(std::ostream &os, const opera_arta &arta) {
        os << "titlu: " << arta.titlu << " artist: " << arta.artist << " stil: "
           << arta.stil << " an_pub: " << arta.an_pub << " afisare: " << arta.afisare;
        return os;
    }

    opera_arta(const std::string &titlu, const std::string &artist, const std::string &categorie,
               const std::string &stil, int anPub, bool afisare) : titlu(titlu), artist(artist), stil(stil),
                                                                   an_pub(anPub), afisare(afisare) {}

    void status (){
        if (afisare == 1)
            std::cout<< "Opera '"<< titlu << "' este afisata\n";
        else
            std::cout<< "Opera '"<< titlu << "' nu este afisata\n";
    }
};
#endif //PROIECT_POO_OPERA_ARTA_H

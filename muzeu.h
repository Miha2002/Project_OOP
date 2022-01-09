//
// Created by Asus tuf on 1/9/2022.
//

#ifndef PROIECT_POO_MUZEU_H
#define PROIECT_POO_MUZEU_H
class muzeu {
    std::vector<colectie> colectii;
    int bilet;

public:
    friend std::ostream &operator<<(std::ostream &os, const muzeu &muzeu) {
        os << "colectii: " << " bilet: " << muzeu.bilet;
        for(const auto &colectie : muzeu.colectii)
            os << colectie;
        return os;
    }

    void setBilet(int bilet) {
        muzeu::bilet = bilet;
    }

    void adauga(colectie const &colectie) {
        colectii.push_back(colectie);
    }

    void detalii_colectie (const colectie &c){
        std::cout << c << "\n";}

    void detalii_opera (const opera_arta &a){
        std::cout << a << "\n";}

    void program (){
        std::cout<< "Indiferent de zi, muzeul se deschide la ora 08:00 si se inchide la 22:00 !\n";
    }

    void cost_bilete (){
        float cost=0;
        int x,y,g;
        std::cout<< "Cati oameni vor sa viziteze muzeul?\n";
        std::cin>> x;
        std::cout<< "Cati dintre acestia sunt copii?\n";
        std::cin>> y;
        std::cout<< "Doriti ghid?\n NU-0\n DA-1\n";
        std::cin>> g;
        if (x<10)
            cost=bilet*(x-y) + bilet*0.5*y;
        else {
            cost=bilet*(x-y) + bilet*0.5*y;
            cost= cost * 0.90;
        }
        if (g=1)
            cost = cost + 100;
        std::cout<< "Pretul total al biletelor este: " << cost <<"RON\n\n";
    }
};
#endif //PROIECT_POO_MUZEU_H

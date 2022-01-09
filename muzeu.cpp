//
//
#include "muzeu.h"

std::ostream &operator<<(std::ostream &os, const muzeu &muzeu) {
    os << "colectii: " << " bilet: " << muzeu.bilet;
    for(const auto &colectie : muzeu.colectii)
        os << colectie;
    return os;
}

void muzeu::setBilet(int bilet) {
    muzeu::bilet = bilet;
}

void muzeu::adauga(const colectie &colectie) {
    colectii.push_back(colectie);
}

void muzeu::program() {
    std::cout<< "Indiferent de zi, muzeul se deschide la ora 08:00 si se inchide la 22:00 !\n";
}

void muzeu::cost_bilete() {
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
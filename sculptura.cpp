//
//
#include "sculptura.h"
#include "erori.h"

sculptura::sculptura(const std::string &titlu, const std::string &artist, const std::string &stil, int anPub,
                     bool afisare, const std::string &material, int greutate, float inaltime) :opera_arta(titlu, artist,
                                stil, anPub, afisare), material(material), greutate(greutate), inaltime(inaltime) {

    if(inaltime<0.1 || inaltime>8)
        throw eroare_marime();
    if(greutate>4000)
        throw eroare_greutate();
}

std::ostream &operator<<(std::ostream &os, const sculptura &sculptura) {
    os << static_cast<const opera_arta &>(sculptura) << "\nmaterial: " << sculptura.material << ", greutate: "
       << sculptura.greutate << ", inaltime: " << sculptura.inaltime;
    return os;
}

const std::string &sculptura::getTitlu() const {
    return opera_arta::getTitlu();
}

std::shared_ptr<opera_arta> sculptura::clone() const {
    return std::make_shared<sculptura>(*this);
}

void sculptura::descriere() {
    int x;
    std::cout<<"Aceasta este sculptura '"<< titlu <<"' de "<< artist <<" publicata in anul"<< an_pub
             <<"care apartine stilului "<< stil <<".\n";
    if (afisare == 1)
        std::cout<<"La momentul actual, opera este afisata in muzeu.\n\n";
    else
        std::cout<<"La momentul actual, opera nu este afisata in muzeu.\n\n";
    std::cout<<"Doriti sa aflati mai multe?\nNU-0\nDA-1\n";
    std::cin>>x;
    if (x==1)
        std::cout<<"Sculptura este facuta din "<< material << "si cantareste aproximativ "
                 << greutate << "avand in jur de "<< inaltime <<"metrii inaltime.\n";
}

void sculptura::suvenir(){
    if (inaltime > 3.00) //se pierd detalii de pe sculptura
        std::cout<<"Nu se vand copii ale sculpturii.\n";
    else {
        if (inaltime > 2.00)
            std::cout << "Copii in miniatura ale sculpturii, " << inaltime * 5
                      << "cm, pot fi achizitonate la pretul de " <<int(inaltime * 20) << "RON.\n";
        else
            std::cout << "Copii in miniatura ale sculpturii, " << inaltime * 10
                      << "cm, pot fi achizitonate la pretul de " <<int(inaltime * 40) << "RON.\n";
    }
}

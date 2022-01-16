//
//

#include "pictura.h"
#include "erori.h"

pictura::pictura(const std::string &titlu, const std::string &artist, const std::string &stil,
                 int anPub, bool afisare, const std::string &tipVopsea, int inaltime,
                 int latime) : opera_arta(titlu, artist, stil, anPub, afisare), tip_vopsea(tipVopsea),
                               inaltime(inaltime), latime(latime) {

    if(inaltime<10 || inaltime>500 || latime <10 || latime>500)
        throw eroare_marime();
}

std::ostream &operator<<(std::ostream &os, const pictura &pictura) {
    os << static_cast<const opera_arta &>(pictura) << "\ntip_vopsea: " << pictura.tip_vopsea << ", inaltime: "
       << pictura.inaltime << ", latime: " << pictura.latime;
    return os;
}

const std::string &pictura::getTitlu() const {
    return opera_arta::getTitlu();
}

std::shared_ptr<opera_arta> pictura::clone() const{
    return std::make_shared<pictura>(*this);
}

void pictura::descriere() {
    int x;
    std::cout<<"Aceasta este pictura '"<< titlu <<"' de "<< artist <<" publicata in anul "<< an_pub
    <<" care apartine stilului "<< stil <<".\n";
    if (afisare == 1)
        std::cout<<"La momentul actual, opera este afisata in muzeu.\n\n";
    else
        std::cout<<"La momentul actual, opera nu este afisata in muzeu.\n\n";
    std::cout<<"Doriti sa aflati mai multe?\nNU-0\nDA-1\n";
    std::cin>>x;
    if (x==1)
        std::cout<<"Tipul de vopsea folosit este "<< tip_vopsea << ",iar dimensiunea picturii este "
        << inaltime<<"x"<<latime<<".\n";
}

void pictura::suvenir(){
    if (inaltime > 100 && latime > 100)
        std::cout << "Nu se vand copi alea acestei picturi.\n";
    else {
        if (inaltime > 50 && latime > 50)
            std::cout << "Copi ale acestei picturi, avand dimensiunile " << inaltime * 0.5 << "x" << latime * 0.5
                      << " pot fi cumparate ca suvenir la pretul de " << int((inaltime * 0.5) * (latime * 0.5) / 10)
                      << "RON.\n";
        else
            std::cout << "Copi ale acestei picturi, avand dimensiunile " << inaltime << "x" << latime
                      << " pot fi cumparate ca suvenir la pretul de " << (inaltime * latime) / 5
                      << "RON.\n";
    }
}
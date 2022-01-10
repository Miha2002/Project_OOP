//
//

#include "pictura.h"

pictura::pictura(const std::string &titlu, const std::string &artist, const std::string &stil,
                 int anPub, bool afisare, const std::string &tipVopsea, int inaltime,
                 int latime) : opera_arta(titlu, artist, stil, anPub, afisare), tip_vopsea(tipVopsea),
                               inaltime(inaltime), latime(latime) {}

std::shared_ptr<opera_arta> pictura::clone() const{
    return std::make_shared<pictura>(*this);
}

void pictura::afis(std::ostream& os) const{
    os << "pictura";
    opera_arta::afis(os);
}

void pictura::descriere() {
    int x;
    std::cout<<"Aceasta este pictura '"<< titlu <<"' de "<< artist <<" publicata in anul"<< an_pub
    <<"care apartine stilului "<< stil <<".\n";
    if (afisare == 1)
        std::cout<<"La momentul actual, opera este afisata in muzeu.\n\n";
    else
        std::cout<<"La momentul actual, opera nu este afisata in muzeu.\n\n";
    std::cout<<"Doriti sa aflati mai multe?\nNU-0\nDA-1\n";
    std::cin>>x;
    if (x==1)
        std::cout<<"Tipul de vopsea folosit este "<< tip_vopsea << ",iar dimensiunea picturii este "
        << inaltime <<"x"<<latime<<".\n";
}

void pictura::suvenir(){
    if (inaltime > 100 && latime > 100)
        std::cout << "Nu se vand copi alea acestei picturi.\n";
    else {
        if (inaltime > 50 && latime > 50)
            std::cout << "Copi ale acestei picturi, avand dimensiunile " << inaltime * 0.25 << "x" << latime * 0.25
                      << "pot fi cumparate ca suvenir la pretul de" << int((inaltime * 0.25) * (latime * 0.25) / 10)
                      << "RON.\n";
        else
            std::cout << "Copi ale acestei picturi, avand dimensiunile " << inaltime * 0.5 << "x" << latime * 0.5
                      << "pot fi cumparate ca suvenir la pretul de" << int((inaltime * 0.5) * (latime * 0.5) / 5)
                      << "RON.\n";
    }
}

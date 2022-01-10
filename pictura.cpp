//
//

#include "pictura.h"

pictura::pictura(const std::string &titlu, const std::string &artist, const std::string &stil,
                 int anPub, bool afisare, const std::string &tipVopsea, int lungime,
                 int latime) : opera_arta(titlu, artist, stil, anPub, afisare), tip_vopsea(tipVopsea),
                               lungime(lungime), latime(latime) {}

std::shared_ptr<opera_arta> pictura::clone() const{
    return std::make_shared<pictura>(*this);
}

void pictura::afis(std::ostream& os) const{
    os << "pictura";
    opera_arta::afis(os);
}

void pictura::descriere() {
    std::cout<<"Opera '"<< titlu <<"' de "<< artist <<" ";
}

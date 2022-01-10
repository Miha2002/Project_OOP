//
//
#include "sculptura.h"

sculptura::sculptura(const std::string &titlu, const std::string &artist, const std::string &stil,
                     int anPub, bool afisare, const std::string &material, int greutate)
        : opera_arta(titlu, artist, stil, anPub, afisare), material(material), greutate(greutate) {}

std::shared_ptr<opera_arta> sculptura::clone() const {
    return std::make_shared<sculptura>(*this);
}

void sculptura::afis(std::ostream& os) const{
    os << "scultura";
    opera_arta::afis(os);


}
//
//
#include "sculptura.h"

sculptura::sculptura(const std::string &titlu, const std::string &artist, const std::string &categorie,
                     const std::string &stil, int anPub, bool afisare) : opera_arta(titlu, artist, categorie, stil,
                                                                                    anPub, afisare) {}

std::shared_ptr<opera_arta> sculptura::clone() const {
    return std::make_shared<sculptura>(*this);
}

void sculptura::afis(std::ostream& os) const{
    os << "scultura";
    opera_arta::afis(os);
}
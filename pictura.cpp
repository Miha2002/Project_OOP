//
//

#include "pictura.h"

pictura::pictura(const std::string &titlu, const std::string &artist, const std::string &categorie,
                 const std::string &stil, int anPub, bool afisare) : opera_arta(titlu, artist, categorie,
                                                                                stil, anPub, afisare) {}

std::shared_ptr<opera_arta> pictura::clone() const{
    return std::make_shared<pictura>(*this);
}

void pictura::afis(std::ostream& os) const{
    os << "pictura";
    opera_arta::afis(os);
}

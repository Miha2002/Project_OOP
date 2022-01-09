//
//
#include "sculptura.h"

std::ostream &operator<<(std::ostream &os, const sculptura &sculptura) {
    os << static_cast<const opera_arta &>(sculptura);
    return os;
}

sculptura::sculptura(const std::string &titlu, const std::string &artist, const std::string &categorie,
                     const std::string &stil, int anPub, bool afisare) : opera_arta(titlu, artist, categorie, stil,
                                                                                    anPub, afisare) {}
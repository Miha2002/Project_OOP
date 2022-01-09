//
//

#include "pictura.h"

std::ostream &operator<<(std::ostream &os, const pictura &pictura) {
    os << static_cast<const opera_arta &>(pictura);
    return os;
}

pictura::pictura(const std::__cxx11::basic_string<char> &titlu, const std::__cxx11::basic_string<char> &artist,
                 const std::__cxx11::basic_string<char> &categorie, const std::__cxx11::basic_string<char> &stil,
                 int anPub, bool afisare) : opera_arta(titlu, artist, categorie, stil, anPub, afisare) {}

std::shared_ptr<opera_arta> pictura::clone() const{
    return std::make_shared<pictura>(*this);
}

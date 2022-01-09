//
//

#include <string>
#include "opera_arta.h"
#include "pictura.h"

pictura::pictura(const std::__cxx11::basic_string<char> &titlu, const std::__cxx11::basic_string<char> &artist,
                 const std::__cxx11::basic_string<char> &categorie, const std::__cxx11::basic_string<char> &stil,
                 int anPub, bool afisare) : opera_arta(titlu, artist, categorie, stil, anPub, afisare) {}

std::shared_ptr<opera_arta> pictura::clone() const{
    return std::make_shared<pictura>(*this);
}
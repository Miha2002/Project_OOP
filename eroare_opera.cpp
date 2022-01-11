//
//

#include "eroare_opera.h"

eroare_opera::eroare_opera(const std::string &err) :
runtime_error("Eroare opera:" + err) {}

eroare_stil::eroare_stil() : eroare_opera("Stilul acesta nu este permis"){}

eroare_an::eroare_an() : eroare_opera("Opera este prea veche"){}



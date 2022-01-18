//
//

#include "erori.h"

eroare_opera::eroare_opera(const std::string &arg) :
runtime_error("Eroare opera: " + arg) {}

eroare_stil::eroare_stil() : eroare_opera("Stilul acesta nu este permis"){}

eroare_an::eroare_an() : eroare_opera("Opera este prea veche"){}

eroare_marime::eroare_marime() : eroare_opera("Opera este prea mare/mica"){}

eroare_greutate::eroare_greutate() : eroare_opera("Sculptura este prea grea"){}

eroare_cautare::eroare_cautare() : eroare_opera("Opera cu acest titlul nu a fost gasita"){}

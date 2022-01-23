//
//

#include "erori.h"

eroare::eroare(const std::string &arg) :
runtime_error("Eroare opera: " + arg) {}

eroare_stil::eroare_stil() : eroare("Stilul acesta nu este permis"){}

eroare_an::eroare_an() : eroare("Opera este prea veche"){}

eroare_marime::eroare_marime() : eroare("Opera este prea mare/mica"){}

eroare_greutate::eroare_greutate() : eroare("Sculptura este prea grea"){}

eroare_cautare::eroare_cautare() : eroare("Opera cu acest titlul nu a fost gasita"){}

eroare_data::eroare_data() : eroare("Data este invalida"){}

eroare_zi::eroare_zi() : eroare("Muzeul este inchis in zilele de luni"){}

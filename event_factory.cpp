//
//

#include "event_factory.h"

eveniment::eveniment(const data_anuala &dataIn, const data_anuala &dataTr, int pretIn, const std::string &tematica,
                     const colectie &colectieSpeciala, const std::string &invitatSpecial)
                     : data_in(dataIn), data_tr(dataTr), pret_in(pretIn), tematica(tematica),
                     colectie_speciala(colectieSpeciala), invitat_special(invitatSpecial){}

std::ostream &operator<<(std::ostream &os, const eveniment &eveniment) {
    os << "data incepere: " << eveniment.data_in << "\ndata terminare: " << eveniment.data_tr << "\npret intrare: " << eveniment.pret_in
       << " RON\ntematica: " << eveniment.tematica << "\ncolectie speciala:\n" << eveniment.colectie_speciala;
    if (eveniment.invitat_special != "-")
        os << "invitat special: " << eveniment.invitat_special << "\n";
    return os;
}

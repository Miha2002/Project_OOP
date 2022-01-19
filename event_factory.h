//
//

#ifndef PROIECT_POO_EVENT_FACTORY_H
#define PROIECT_POO_EVENT_FACTORY_H

#include <iostream>
#include "data_anuala.h"
#include "colectie.h"

class eveniment {
    data_anuala data_in;    //data la care incepe evenimentul
    data_anuala data_tr;    //data la care se termina evenimentul
    int pret_in;
    std::string tematica;
    colectie colectie_speciala;
    std::string invitat_special;

public:
    eveniment(const data_anuala &dataIn, const data_anuala &dataTr, int pretIn, const std::string &tematica,
              const colectie &colectieSpeciala, const std::string &invitatSpecial);

    friend std::ostream &operator<<(std::ostream &os, const eveniment &eveniment);
};

class event_factory {
public:
    static eveniment ziua_mondiala_art(){
        colectie c {"Arta universala", 201};
        data_anuala d1 {15,4};
        data_anuala d2 {17,4};
        return eveniment(d1, d2, 20, "Arta universala", c, "Victor Man");
    };
    static eveniment meet_the_artist(){
        colectie c {"Artistii romani", 202};
        data_anuala d1 {10,7};
        data_anuala d2 {15,7};
        return eveniment(d1, d2, 50, "Artistii romani", c, "Adrian Ghenie");
    };
    static eveniment istoria_artei(){
        colectie c {"Istoria artei", 203};
        data_anuala d1 {1,10};
        data_anuala d2 {14,10};
        return eveniment(d1, d2, 30, "Istoria artei", c, "-");
    };
    static eveniment constantin_brancusi(){
        colectie c {"Parintele sculpturii moderne", 204};
        data_anuala d1 {19,2};
        data_anuala d2 {25,2};
        return eveniment(d1, d2, 20, "Parintele sculpturii moderne", c, "-");
    };
};


#endif //PROIECT_POO_EVENT_FACTORY_H

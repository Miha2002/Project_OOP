//
//

#ifndef PROIECT_POO_BUILDER_H
#define PROIECT_POO_BUILDER_H

#include <iostream>
#include <string>


class desen {
    int lungime;
    int latime;             //cm
    std::string culoare_pr; //culoarea predominanta in opera
    std::string tip_desen;  // portret, peisaj etc.
    std::string obiect;     // obiectul desenat

    friend class desen_builder;

public:
    desen() = default;
};

class desen_builder {
    desen d;
public:
    desen_builder() = default;

    desen_builder& lungime(int l);
    desen_builder& latime(int l);
    desen_builder& culoare_pr(const std::string& c);
    desen_builder& tip_desen(const std::string& tip);
    desen_builder& obiect(const std::string& ob);

    desen build();
};


#endif //PROIECT_POO_BUILDER_H

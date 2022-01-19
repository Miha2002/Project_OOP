//
//

#ifndef PROIECT_POO_DESEN_BUILDER_H
#define PROIECT_POO_DESEN_BUILDER_H

#include <iostream>
#include <string>

//builder-ul pt clasa desen reprezinta un fel de atelier pt vizitatorii muzeului
//unde pot sa faca propriile desene

class atelier_desen {
    int lungime;
    int latime;             //cm
    std::string culoare_pr; //culoarea predominanta in opera
    std::string tip_desen;  // portret, peisaj etc.
    std::string obiect;     // obiectul desenat

    friend class desen_builder;
    virtual void print(std::ostream &os) const;

public:
    friend std::ostream &operator<<(std::ostream &os, const atelier_desen &d);

    //getter pt toate variabilele
    int getLungime() const;
    int getLatime() const;
    const std::string &getCuloarePr() const;
    const std::string &getTipDesen() const;
    const std::string &getObiect() const;

    atelier_desen() = default;
};

class desen_builder {
    atelier_desen d;
public:
    desen_builder() = default;

    desen_builder& lungime(int l);
    desen_builder& latime(int l);
    desen_builder& culoare_pr(const std::string& c);
    desen_builder& tip_desen(const std::string& tip);
    desen_builder& obiect(const std::string& ob);

    atelier_desen build();
};



#endif //PROIECT_POO_DESEN_BUILDER_H

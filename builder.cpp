//
// Created by Asus tuf on 1/18/2022.
//

#include "builder.h"
#include "erori.h"

desen_builder &desen_builder::lungime(int l) {
    if(l <10 || l>500)
        throw eroare_marime();
    d.lungime = l;
    return *this;
}

desen_builder &desen_builder::latime(int l) {
    if(l <10 || l>500)
        throw eroare_marime();
    d.latime = l;
    return *this;
}

desen_builder &desen_builder::culoare_pr(const std::string &c) {
    d.culoare_pr = c;
    return *this;
}

desen_builder &desen_builder::tip_desen(const std::string &tip) {
    d.tip_desen = tip;
    return *this;
}

desen_builder &desen_builder::obiect(const std::string &ob) {
    d.obiect = ob;
    return *this;
}

desen desen_builder::build() {
    return d;
}

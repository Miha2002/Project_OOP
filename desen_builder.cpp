//
// Created by Asus tuf on 1/18/2022.
//

#include "desen_builder.h"
#include "erori.h"

void atelier_desen::print(std::ostream &os) const {
    os << "Canvasul folosit are dimensiunile " << lungime << "x" << latime << ". Desenul facut de dvs. este un " << tip_desen << " al unui/unei "
    << obiect << ".\nCuloarea predominanta a desenului este " << culoare_pr << ".\n";
}

std::ostream &operator<<(std::ostream &os, const atelier_desen &d)
{
    os.precision(2);
    d.print(os);
    return os;
}

int atelier_desen::getLungime() const {
    return lungime;
}

int atelier_desen::getLatime() const {
    return latime;
}

const std::string &atelier_desen::getCuloarePr() const {
    return culoare_pr;
}

const std::string &atelier_desen::getTipDesen() const {
    return tip_desen;
}

const std::string &atelier_desen::getObiect() const {
    return obiect;
}

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

atelier_desen desen_builder::build() {
    return d;
}
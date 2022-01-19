//
// Created by Asus tuf on 1/19/2022.
//

#include "data_anuala.h"
#include "erori.h"

data_anuala::data_anuala(int zi, int luna) : zi(zi), luna(luna) {

    if(zi<1 || zi> 31 || luna <1 || luna>12)
        throw eroare_data();
}

std::ostream &operator<<(std::ostream &os, const data_anuala &anuala) {
    os << anuala.zi << "/" << anuala.luna;
    return os;
}

int data_anuala::getZi() const {
    return zi;
}

int data_anuala::getLuna() const {
    return luna;
}

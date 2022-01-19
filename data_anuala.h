//
// Created by Asus tuf on 1/19/2022.
//

#ifndef PROIECT_POO_DATA_ANUALA_H
#define PROIECT_POO_DATA_ANUALA_H

#include <ostream>

class data_anuala {
    int zi;
    int luna;

public:
    data_anuala(int zi, int luna);

    friend std::ostream &operator<<(std::ostream &os, const data_anuala &anuala);

    int getZi() const;
    int getLuna() const;
};


#endif //PROIECT_POO_DATA_ANUALA_H

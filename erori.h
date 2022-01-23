//
//

#ifndef PROIECT_POO_ERORI_H
#define PROIECT_POO_ERORI_H

#include <iostream>

class eroare : public std::runtime_error {
public:
    eroare(const std::string& err);
};

class eroare_stil : public eroare {
public:
    eroare_stil();
};

class eroare_an : public eroare {
public:
    eroare_an();
};

class eroare_marime : public eroare {
public:
    eroare_marime();
};

class eroare_greutate : public eroare {
public:
    eroare_greutate();
};

class eroare_cautare : public eroare {
public:
    eroare_cautare();
};

class eroare_data : public eroare {
public:
    eroare_data();
};

class eroare_zi : public eroare {
public:
    eroare_zi();
};

class eroare_luni : public eroare {
public:
    eroare_luni();
};


#endif //PROIECT_POO_ERORI_H

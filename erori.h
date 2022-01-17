//
//

#ifndef PROIECT_POO_ERORI_H
#define PROIECT_POO_ERORI_H

#include <iostream>

class eroare_opera : public std::runtime_error {
public:
    eroare_opera(const std::string& err);
};

class eroare_stil : public eroare_opera {
public:
    eroare_stil();
};

class eroare_an : public eroare_opera {
public:
    eroare_an();
};

class eroare_marime : public eroare_opera {
public:
    eroare_marime();
};

class eroare_greutate : public eroare_opera {
public:
    eroare_greutate();
};

class eroare_cautare : public eroare_opera {
public:
    eroare_cautare();
};


#endif //PROIECT_POO_ERORI_H

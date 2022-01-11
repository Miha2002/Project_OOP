//
//

#ifndef PROIECT_POO_EROARE_OPERA_H
#define PROIECT_POO_EROARE_OPERA_H

#include <iostream>

class eroare_opera : std::runtime_error {
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


#endif //PROIECT_POO_EROARE_OPERA_H

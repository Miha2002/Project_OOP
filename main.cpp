//Aplicatie Muzeu de arta

#include "opera_arta.h"
#include "colectie.h"
#include "muzeu.h"
#include "pictura.h"

int main () {
    muzeu M;
    M.setBilet(30);
    colectie C1{"Din trecut",101};
    colectie C2{"Arta contemporana",102};

    pictura o1{"Camp cu maci","Claude Monet","pictura","impresionism", 1870,1};
    pictura o2{"Floarea soarelui","Vincent Van Gogh","pictura","post-impresionism", 1888,1};
    sculptura o3{"Pieta","Michelangelo Buonarroti","sculptura","renascentism", 1499,0};
    opera_arta o4{"Cainele balon","Jeff Koons","sculptura","arta contemporana", 1993,1};
    opera_arta o5{"Flumequin","Damien Hirst","pictura","arta contemporana", 2007,0};

    C1.adauga(o1);
    C1.adauga(o2);
    C1.adauga(o3);
    C2.adauga(o4);
    C2.adauga(o5);

    M.adauga(C1);
    M.adauga(C2);
//    std::cout << M;
    M.program();
    M.cost_bilete();
    return 0;
}

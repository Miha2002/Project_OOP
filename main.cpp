//Aplicatie Muzeu de arta

#include "opera_arta.h"
#include "colectie.h"
#include "muzeu.h"
#include "pictura.h"
#include "sculptura.h"
#include "erori.h"
#include "desen_builder.h"
#include "event_factory.h"

void functie1(){
    srand(time(NULL));

    muzeu<int, int> M("Muzeul de Arta Universala", 20);
    M.setBilet(30);
    colectie C1{"Trecutul alb-negru", 101};
    colectie C2{"Arta contemporana", 102};
    colectie C3{"Adevarul despre arta", 103};

    pictura p1{"Camp cu maci", "Claude Monet", "impresionism", 1870, true, "ulei", 50, 65};
    pictura p2{"Floarea soarelui", "Vincent Van Gogh", "post-impresionism", 1888, true, "ulei", 92, 73};
    pictura p3{"Flumequine", "Damien Hirst", "contemporan", 2007, false, "acrilic", 140, 108};

    sculptura s1{"Pieta", "Michelangelo Buonarroti", "renascentism", 1499, false, "marmura", 3040, 1.95};
    sculptura s2{"Cainele balon", "Jeff Koons", "contemporan", 1993, true, "otel", 1000, 3.10};

    C1.adauga(p1);
    C1.adauga(p2);
    C1.adauga(s1);

    C2.adauga(p3);
    C2.adauga(s2);

    M.adauga(C1);
    M.adauga(C2);
    M.adauga(C3);

//    desen_builder x;
//    atelier_desen d1 = x.lungime(25).latime(10).culoare_pr("rosu").
//              tip_desen("peisaj").obiect("lac").build();
//    std::cout << d1;

    eveniment event1 = event_factory::ziua_mondiala_art();
    std::cout << event1 << "\n";

    eveniment event2 = event_factory::istoria_artei();
    std::cout << event2 << "\n";

//    M.program();              //Afisaza programul muzeului intr-o anumita zi
//    M.cost_bilete();          //Calculeaza pretul biletelor
//    M.colectie_random();      //Afisaza detaliile unei colectii random

//    M.licitatii();            //Simuleaza o licitatie - limitata la 12 opere achizitionate
//    M.buget_plus();           //Adauga o suma random la bugetul muzeului
//    M.licitatii();            //Licitatie 2

//    p1.descriere();

//    C1.suvenir_col("Pieta");  //Cauta o opera si afisaza daca exista suveniruri pt ea
//    C1.suvenir_col("Bieta");
}

int main () {
    try {
        functie1();
    }
    catch (eroare &error) {
        std::cout << error.what() << "\n";
    }
    catch (std::exception& e){
        std::cout << e.what() << "\n";
    }

    return 0;
}
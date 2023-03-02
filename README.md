# OOP Art Museum 

- The project is structured similar to a database for an art museum
- An application for an art muzeum, showcasing the artworks and collections.


## Tema 1

#### Cerințe
- [x] definirea a minim 3 clase
  - [x] 
  - [x] 
  - [x] 
- [x] constructori de inițializare
- [x] constructor de copiere sau cc (pt minim o clasă)
- [x] `operator=` sau op= (pt minim o clasă, aceeași unde s-a făcut cc și destructor)
- [x] destructor (pt minim o clasă, aceeași unde s-a făcut cc și op=)
- [ ] `operator<<` pt toate clasele
- [ ] cât mai multe `const`
- [ ] implementarea a minim 2 funcții publice pentru funcționalități specifice temei alese (nu se iau în considerare citiri/afișări/getteri/setteri)
  - [ ] <prima funcționalitate>
  - [ ] <a doua funcționalitate>
- [ ] scenariu de utilizare a claselor definite: apelarea din `main` a tuturor funcțiilor _publice_ definite (nu generați constructori/getteri/setteri dacă nu aveți nevoie de ei); apelarea se va face direct sau indirect - adică din `main` se pot apela funcții care construiesc obiecte cu clasele definite și folosesc aceste obiecte
- [ ] după ce e gata prima temă, tag de `git`: de exemplu `v0.1`
- [ ] GitHub Actions sau alt serviciu de CI (Continuous Integration) - exemplu [aici](https://github.com/mcmarius/demo-poo/blob/master/.github/workflows/cmake.yml) (a se vedea și `CMakeLists.txt` din același repo pt compiler flags)

## Tema 2

#### Cerințe
- [ ] separarea codului din clase în `.h` (sau `.hpp`) și `.cpp`
- [ ] moșteniri
  - [ ] funcții virtuale (pure)
  - [ ] apelarea constructorului din clasa de bază 
  - [ ] smart pointers / pointeri normali și verificat să nu fie memory leaks
- [ ] excepții
  - [ ] predefinite
  - [ ] ierarhie proprie (cu baza `std::exception` sau derivată din `std::exception`)
  - [ ] utilizare cu sens: de exemplu, `throw` în constructor, `try`/`catch` în `main`
- [ ] funcții și atribute `static`
- [ ] STL
- [ ] cât mai multe `const`
- [ ] la fel ca mai sus, apelarea tuturor funcțiilor publice din `main`
- [ ] încă un tag de `git`: de exemplu `v0.2`

## Tema 3

#### Cerințe
- [ ] 2 design patterns
- [ ] funcții și clase șablon (`template`)
- [ ] un ultim (?) tag de `git`: de exemplu `v0.3` sau `v1.0`


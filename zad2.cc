#include <omp.h>
#include <iostream>
using namespace std;

int main () {

  int c = 100;
  int v = 0;

// Uzupelnij ponizszy blok o odpowiednia klauzule firstprivate
// a takze zabezpiecz w srodku operacje na wielkosci wspoldzielonej
// Wynik koncowy powinien byc: 400

  #pragma omp parallel num_threads(4) firstprivate(c)
  {
#pragma omp lastprivate(v)
      while (c--) {
        ++v;
      }
  }  

  cout << "Koncowa wartosc v = " << v << endl;

}


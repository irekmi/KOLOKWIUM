#include <omp.h>
#include <iostream>
using namespace std;

int main () {

    int i, plus = 10, mult = 10;

    // W ponizszej petli ma miejsce data race.
    // Dopisz odpowiednie klauzule do tego bloku
    // tak, zeby obliczenia rownolegle w petli
    // byly poprawne. 
    
    #pragma omp parallel for num_threads(4) 
    for (i = 0; i < 4; ++i)
    {
        int j = i + 1;
        plus = plus + j;
        mult = mult * j;
    }

    cout << " plus = " << plus << "  mult = " << mult << endl;

}

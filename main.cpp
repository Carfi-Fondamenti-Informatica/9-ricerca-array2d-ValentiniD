#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char elenco_nomi[10][20];
    char inserimento_nomi[20];
    init(elenco_nomi, 10);
    init(inserimento_nomi);
    int a;

    for(int i=0; i<20; i++){
        init(inserimento_nomi);
        cin >> inserimento_nomi;
        for(int j=0; j<10; j++){
            elenco_nomi[j][i] = inserimento_nomi[j];
        }
    }
    a = ricerca_nomi(elenco_nomi, inserimento_nomi);
    if (a != -1) {
        cout << a;
    } else {
        cout << "non presente" << endl;
    }
    return 0;
}

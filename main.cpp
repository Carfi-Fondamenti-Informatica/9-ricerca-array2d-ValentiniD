#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char elenco_nomi[10][20];
    char nomi[20];
    init(elenco_nomi, 10);
    init(nomi,20);
    int a;

   for (int i=0; i<10; i++){
        cin >> elenco_nomi[i];
    }
    cin>> nome;
    a= ricerca_nomi(elenco_nomi, nomi);
    if (a==-1){
        cout<<"non presente"<<endl;
    } else {
        cout << a << endl;
    }
    return 0;
}

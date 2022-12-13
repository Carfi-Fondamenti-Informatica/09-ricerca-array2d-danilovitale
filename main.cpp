#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    int pos=0;
char listanome[10][20]={};
char cerca[1][20]={};
for(int i=0;i<2;i++){
    cin >> listanome[i];}
    cin >> cerca[0];

    if (funzione(listanome, cerca, pos) <= 0) {
        cout << "non presente";
    } else {
        cout << pos;
    }
    return 0;



}




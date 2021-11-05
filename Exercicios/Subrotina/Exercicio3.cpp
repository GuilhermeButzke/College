#include <iostream>
#include "subrotina.h"
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int x,y;

    cout << "Informe dois números: ";
    cin >> x >> y;

    cout << mdc(x,y);

    return 0;
}
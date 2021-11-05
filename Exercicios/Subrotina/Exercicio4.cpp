#include <iostream>
#include "subrotina.h"
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int x, y;

    cout << "Informe dois números inteiros positivos: ";
    cin >> x >> y;

    resto(x, y);




    return 0;
}
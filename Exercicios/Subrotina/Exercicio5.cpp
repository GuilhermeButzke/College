#include <iostream>
#include "subrotina.h"
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int x;

    cout << "Informe um número inteiro positivo: ";
    cin >> x;

    cout << perfeito(x);
}
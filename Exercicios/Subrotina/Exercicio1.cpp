#include <iostream>
#include "subrotina.h"
using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int x;

    cout << "Informe o numero: ";
    cin >> x;

    cout << verificador(x);
}
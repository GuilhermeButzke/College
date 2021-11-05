#include <iostream>

using namespace std;

#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int potencia, base, resultado = 0;

    cout << "Informe a base"<<endl;
    cin >> base;
    cout << "Informe a potencia"<<endl;
    cin >> potencia;

    resultado = base;

    for (;potencia > 1; potencia--){
        resultado = resultado * base;
    }
    cout << "O resultado é: " << resultado;
    return 0;
}
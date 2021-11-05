#include <iostream>

using namespace std;

#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");

    float numero;

    do {
        cout << "Digite um número real positivo"<<endl;
        cin >> numero;
        if (numero <= 0) {
            cout <<endl<< "Número invalido, tente novamente."<<endl;
        }
    } while (numero <= 0);
    cout <<endl<< "O número digitado é valido";

    return 0;
}
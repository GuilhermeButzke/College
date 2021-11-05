#include <iostream>

using namespace std;

#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int cont = 100, soma;

    while (cont <=200){
        if (cont != 100) {
            cout << " + " << cont;
        }
        else {
            cout << cont;
        }
        soma = cont + soma;
        cont++;
    }
    cout<< " = " <<soma;
    return 0;
}
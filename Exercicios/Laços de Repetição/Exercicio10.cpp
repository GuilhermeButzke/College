#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int valor1 = 1, valor2 = 1, soma, cont;
    cout<<valor1<<"->"<<valor2;
    for (cont = 1; cont <= 18; cont++){
        soma = valor1 + valor2;
        cout <<"->"<<soma;
        valor1 = valor2;
        valor2 = soma;
    }
    return 0;
}
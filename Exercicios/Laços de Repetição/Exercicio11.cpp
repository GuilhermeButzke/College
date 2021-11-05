#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    float numero, soma, divisao, i;

    cout << "Digite o valor de N" << endl;
    cin >> numero;

    for (i = 1; i <= numero; i++){
        divisao = 1/i;
        soma = soma + divisao;
    }
    cout << soma;
    return 0;
}
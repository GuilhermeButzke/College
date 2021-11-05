#include <iostream>

using namespace std;

#include <locale.h>

#define TAM 5
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int v[TAM], posicao = 0, w[TAM], cont = 4;

    for (posicao = 0; posicao < TAM; posicao++){
        cout << "Digite os valores: ";
        cin >> v[posicao];
    }
    for (posicao = 0; posicao < TAM; posicao++){
       w[cont] = v[posicao];
       cont--;
    }
    for (posicao = 0; posicao < 5; posicao++){
        cout << w[posicao] << endl;
    }
    return 0;
}
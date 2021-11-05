#include <iostream>

using namespace std;

#include <locale.h>

#define TAM 5
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int vet[TAM], qtd = 0;

    for (int i = 0; i < TAM; i++){
        cout << "Digite os valores do vetor: ";
        cin >> vet[i];
    }
    for (int i = 0; i < TAM; i++){
        if (vet[i] == 7){
            cout << "O valor 7 está na posição: " << i << endl;
            qtd++;
        }
    }
    if (qtd > 1){
        cout << "O valor 7 foi inserido " << qtd << " vezes" << endl;
    }
    return 0;
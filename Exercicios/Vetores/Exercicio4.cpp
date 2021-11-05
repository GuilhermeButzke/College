#include <iostream>

using namespace std;

#include <locale.h>

#define TAM 8
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int veta[8], vetb[8];

    for (int i = 0; i < TAM; i++){
        cout << "Digite os valores do vetor A: ";
        cin >> veta[i];

    }
    for (int i = 0; i < TAM; i++){
        cout << "Digite os valores do vetor B: ";
        cin >> vetb[i];
    }
    for (int i = 0; i < TAM; i++){

        veta[i] = veta[i] + vetb[i];
        vetb[i] = veta[i] - vetb[i];
        veta[i] = veta[i] - vetb[i];
    }
    for (int i = 0; i < TAM; i++){
        cout << veta[i] << endl;
    }
    for (int i = 0; i < TAM; i++){
        cout << vetb[i] << endl;
    }
    return 0;
}
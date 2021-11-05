#include <iostream>

using namespace std;

#include <locale.h>
#define TAM 10
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int vet[TAM], fatmaior = 1, maior = 0, menor = 0, fatmenor = 1, i;

    for (i = 0; i < TAM; i++){
        cout << "Declare os valores: ";
        cin >> vet[i];
        if (i == 0){
            maior = vet[i];
            menor = vet[i];
        }

        if (vet[i] > maior){
            maior = vet[i];
        }
        if (vet[i] < menor){
            menor = vet[i];
        }
    }
    for (i = maior; i >= 1; i--){
        fatmaior = fatmaior * i;
    }
    for (i = menor; i >= 1; i--){
        fatmenor = fatmenor * i;
    }
    cout << "Fatoral do maior número: " << fatmaior << endl;
    cout << "Fatoral do menor número: " << fatmenor << endl;
    cout << "Maior número: " << maior << endl << "Menor número: " << menor;
    return 0;
}
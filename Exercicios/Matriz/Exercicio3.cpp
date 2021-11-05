#include <iostream>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define TAM 5
using namespace std;

int main()
{
    srand (time(NULL));

    int mat[TAM][TAM], linha, coluna, valores;

    for (linha = 0; linha < TAM; linha++){
        for (coluna = 0; coluna < TAM; coluna++){
            cout << "Digite 25 valores reais: ";
            cin >> valores;
            if (valores > 100){
                valores = 0;
            }
            mat[linha][coluna] = valores;
        }
    }

    for (linha = 0; linha < TAM; linha++){
        for (coluna = 0; coluna < TAM; coluna++){
            cout << mat [linha][coluna]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
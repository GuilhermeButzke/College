#include <iostream>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define TAM 4
using namespace std;

int main()
{
    srand (time(NULL));

    int mat[TAM][TAM], linha, coluna, soma = 0;

    for (linha = 0; linha < TAM; linha++){
        for (coluna = 0; coluna < TAM; coluna++){
            mat[linha][coluna] = 1;
            if (linha == coluna){
                soma += mat[linha][coluna];
            }
        }
    }
    for (linha = 0; linha < TAM; linha++){
        for (coluna = 0; coluna < TAM; coluna++){
            cout << mat [linha][coluna]<<"\t";
        }
        cout << endl;
    }
    cout << endl << soma;
    return 0;
}
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <time.h>
#define TAM 5
using namespace std;

int main()
{
    srand (time(NULL));

    int mat[TAM][TAM], linha, coluna;

    for (linha = 0; linha < TAM; linha++){
        for (coluna = 0; coluna < TAM; coluna++){
            if (linha == coluna){
                mat[linha][coluna] = 1;
            }
            else if (linha != coluna){
                mat[linha][coluna] = 0;
            }
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
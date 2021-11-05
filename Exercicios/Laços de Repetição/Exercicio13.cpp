#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int inteiro, menorvalor, i;

    for (i = 1; i <= 20; i++){
        cout << "Digite os 20 valores: " <<endl;
        cin >> inteiro;
        if (i == 1){
            menorvalor = inteiro;
        }
        else {
            if (inteiro < menorvalor){
                menorvalor = inteiro;
            }
        }
    }
    cout << "O menor valor é: " << menorvalor;
    return 0;
}
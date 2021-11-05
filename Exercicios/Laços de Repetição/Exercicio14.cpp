#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int inteiro, menorvalor, maiorvalor, i;

    for (i = 1; i <= 5; i++){
        cout << "Digite os 25 valores: " <<endl;
        cin >> inteiro;
        if (i == 1){
            menorvalor = inteiro;
            maiorvalor = inteiro;
        }
        else {
            if (inteiro < menorvalor){
                menorvalor = inteiro;
            }
            if (inteiro > maiorvalor){
                maiorvalor = inteiro;
            }
        }
    }



    cout << "O menor valor é: " << menorvalor << " e o maior valor é: " << maiorvalor <<endl;

    return 0;
}
#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int v, par[30], impar[30], somapar = 0, somaimpar = 0;

    for (int i = 0; i < 30; i++){
        cout << "Digite os valores: ";
        cin >> v;
        if (v % 2 == 0){
            par[i] = v;
            impar[i] = 0;
            somapar += par[i];
        }
        else {
            impar[i] = v;
            par[i] = 0;
            somaimpar += impar[i];
        }
    }
    if (somapar > somaimpar){
            cout << "A maior soma é a par de valor: " << somapar;
        }
        else if (somaimpar > somapar){
            cout << "A maior soma é a impar de valor: " << somaimpar;
        }
    return 0;
}
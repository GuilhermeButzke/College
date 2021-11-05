#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int valor, i;
    float somapar, somaimpar;

    for (i = 1; i <=20; i++){
        cout << "Informe 20 valores inteiros: " <<endl;
        cin >> valor;
        if (valor %2 == 0){
            somapar = somapar +1;
        }
        else {
            somaimpar = somaimpar +1;
        }
    }
    cout << somapar << " são números pares e " << somaimpar << " são números ímpares";

    return 0;
}
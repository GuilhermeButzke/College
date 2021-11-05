#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portugese");

    int idade, soma, i;

    for (i = 1; i <= 10; i++){
        cout << "Qual a idade da pessoa: " << endl;
        cin >> idade;
            if (idade >= 18) {
                soma = soma + 1;
            }
    }
    cout << endl << "O total de pessoas que sao maiores de 18 anos sao: " << soma;

    return 0;
}
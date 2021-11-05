#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int inteiro;
    cout << "Me informe um número inteiro: \n";
    cin >> inteiro;
    if (inteiro < 0){
        inteiro = inteiro*-1;
    }
    cout << "O número informado positivo é " << inteiro;
    return 0;
}
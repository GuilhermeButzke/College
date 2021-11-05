#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int inteiro;
    cout << "Informe um número inteiro: \n";
    cin >> inteiro;
    if (inteiro%2 ==0){
        cout << "O número é par";
    }
    else {
        cout << "O número é ímpar";
    }
    return 0;
}
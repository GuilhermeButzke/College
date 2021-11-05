#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    int i, fatorial = 1, n;

    cout << "Informe um número inteiro: " <<endl;
    cin >> n;

    for (i = 1; i <=n; i++){
        fatorial = fatorial * i;
    }
    cout << fatorial;
    return 0;
}
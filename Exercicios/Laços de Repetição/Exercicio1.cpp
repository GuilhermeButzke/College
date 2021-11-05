#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont;
    for (cont = 1; cont <=30; cont++){
        cout <<"Não vou colar na prova"<<endl;
    }
    return 0;
}
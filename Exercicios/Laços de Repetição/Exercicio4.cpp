#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL, "Portuguese");

    int cont;

    for (cont = 50; cont <=200; cont++){
        cout<<endl<<cont;
    }

    return 0;
}
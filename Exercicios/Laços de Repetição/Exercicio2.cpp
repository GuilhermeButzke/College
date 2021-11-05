#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int operando1 = 5, operando2, calculo;

    while (operando1 <=5){
        operando2 = 1;
        while (operando2 <= 10) {
            calculo = operando1 * operando2;
            cout <<endl<<operando1<< " * "<<operando2<< " = "<<calculo;
            operando2++;
        }
        operando1++;
        cout<<endl<<endl;
    }

    return 0;
}
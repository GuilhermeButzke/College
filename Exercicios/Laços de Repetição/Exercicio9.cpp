#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale (LC_ALL,"Portuguese");

    float operando1 = 1, operando2 = 1, calculo = 1, operacao, cont = 1;

    while (operando1 != 0 && operando2 !=0){
        cout<<"Digite 1 para soma, 2 para produto, 3 para divisão e 4 para potência"<<endl;
        cin>>operacao;
        if (operacao == 1){
            cout<<"Digite o primeiro número a ser somado:"<<endl;
            cin>>operando1;
            cout<<"Digite o segundo número a ser somado:"<<endl;
            cin>>operando2;
            calculo = operando1 + operando2;
            cout<<"O resultado é: "<<calculo<<endl;
            if (operando1 == 0 && operando2 == 0){
                cout<<"Obrigado por usar a Calculadora!";
            }
            }
        else if (operacao == 2){
            cout<<"Digite o primeiro número a ser multiplicado:"<<endl;
            cin>>operando1;
            cout<<"Digite o segundo número a ser multiplicado:"<<endl;
            cin>>operando2;
            calculo = operando1 * operando2;
            cout<<"O resultado é: "<<calculo<<endl;
            if (operando1 == 0 && operando2 ==0){
                cout<<"Obrigado por usar a Calculadora!";
            }
            }
        else if (operacao == 3){
            cout<<"Digite o dividendo:"<<endl;
            cin>>operando1;
            cout<<"Digite o divisor:"<<endl;
            cin>>operando2;
            calculo = operando1/operando2;
            cout<<"O resultado é: "<<calculo<<endl;
            if (operando1 == 0 && operando2 ==0){
                cout<<"Obrigado por usar a Calculadora!";
            }
            }
        else if (operacao == 4) {
            cout<<"Digite a base:"<<endl;
            cin>>operando1;
            cout<<"Digite o expoente:"<<endl;
            cin>>operando2;
            for (cont = 1;cont <=operando2;cont++){
                calculo = operando1 * calculo;
            }
            cout<<"O resultado é: "<<calculo<<endl;
            if (operando1 == 0 && operando2 ==0){
                cout<<"Obrigado por usar a Calculadora!";
            }
            }
    }
    return 0;
}
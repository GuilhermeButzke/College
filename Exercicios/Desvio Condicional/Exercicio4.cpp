#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano, mes, dia, idade, anoAtual, mesAtual, diaAtual;
    cout << "Informe o ano em que nasceu: \n";
    cin >> ano;
    cout << "Informe o mês em que nasceu: \n";
    cin >> mes;
    cout << "Informe o dia em que nasceu: \n";
    cin >> dia;
    cout << "Informe o ano atual: \n";
    cin >> anoAtual;
    cout << "Informe o mês atual: \n";
    cin >> mesAtual;
    cout << "Informe o dia atual: \n";
    cin >> diaAtual;
    if (mesAtual < mes) {
        if (diaAtual < dia){
            idade = anoAtual - ano - 1;
        }
    }
    else {
        idade = anoAtual - ano - 1;
    }
    cout << idade;
    return 0;
}
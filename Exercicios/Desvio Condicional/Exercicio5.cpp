#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int hora, minuto;
    cout << "Informe as horas: \n";
    cin >> hora;
    cout << "Informe os minutos: \n";
    cin >> minuto;
    if (hora <= 23 && hora >= 0){
        if (minuto <=59 && minuto >=0){
            cout << "A hora é válida";
        }
        else {
                cout << "A hora é inválida";
    }}
    else {
        cout << "A hora é inválida";
    }
    return 0;
}
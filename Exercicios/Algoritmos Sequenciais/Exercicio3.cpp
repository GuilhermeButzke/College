#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    float valor, quilo;

    cout << "Informe o valor do quilo: ";
    cin >> valor;

    cout << "Informe a quantidade de quilos: ";
    cin>> quilo;

    cout << "O valor final será de: " << valor * quilo << " reais";

    return 0;
}
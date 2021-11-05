#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int valor, preco;

    cout << "Informe o valor pago: ";
    cin >> valor;

    cout << "Informe o valor do produto: ";
    cin >> preco;

    cout << "O troco é de: " << valor - preco << " reais";

    return 0;
}
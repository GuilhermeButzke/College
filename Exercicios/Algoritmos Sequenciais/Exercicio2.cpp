#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int num;

    cout << "Informe um número real: ";
    cin >> num;

    cout << "Metade do valor é: " << num / 2;

    return 0;
}
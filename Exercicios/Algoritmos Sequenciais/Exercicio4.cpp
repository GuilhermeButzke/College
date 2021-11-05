#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    float produto;

    cout << "Informe o valor do produto: ";
    cin >> produto;

    cout << "O valor final do produto será: " << produto * 0,15;

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int cavalos;

    cout << "Informe a quantidade de cavalos: ";
    cin >> cavalos;

    cout << "A quantidade necessária de ferraduras será " << cavalos * 4;
    
    return 0;
}
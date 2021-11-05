#include <iostream>

using namespace std;

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letra, vogal1, vogal2, vogal3, vogal4, vogal5;
    cout << "Digite uma letra: \n";
    cin >> letra;
    vogal1 = 'a';
    vogal2 = 'e';
    vogal3 = 'i';
    vogal4 = 'o';
    vogal5 = 'u';
    if (letra == vogal1 && vogal2 && vogal3 && vogal4 && vogal5) {
        cout << "É uma vogal";
    }
    else {
        cout << "Não é uma vogal";
    }
    return 0;
}
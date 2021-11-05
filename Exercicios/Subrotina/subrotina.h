#include <iostream>

using namespace std;

//Exercicio 1
int verificador(int x){
    if(x > 0){
        return 1;
    }
    else{
        return 0;
    }
};

//Exercicio 2
void castigo(int x){
    for(int i = 0; i < x; i++){
        cout << "Não vou colar na prova" << endl;
    }
}

//Exercicio 3
int mdc(int x, int y){

    if (x % y == 0){
        return y;
    }
    else{
        return mdc(y, x % y);
    }
};

//Exercicio 4
int resto(int x, int y){

};

//Exercicio 5
int perfeito(int x){
    int soma = 0;

    for (int i = 1; i <= x; i++){
        if (x % i == 0){
            soma++;
        }
    }
    if (soma == x){
        cout << "É perfeito";
    }
    else{
        cout << "Não é perfeito";
    }
};
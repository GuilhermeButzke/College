#include <iostream>

using namespace std;

struct horario{
    int dia, hora, min, seg;
};

int main(){

    setlocale(LC_ALL,"Portuguese");

    horario hora1, hora2, hora3;

    cout << "Informe as horas, minutos e segundos do primeiro horario: ";
    cin >> hora1.hora >> hora1.min >> hora1.seg;

    cout << "Informe as horas, minutos e segundos do segundo horario: ";
    cin >> hora2.hora >> hora2.min >> hora2.seg;

    hora3.seg = hora1.seg + hora2.seg;
    hora3.min = hora1.min + hora2.min;
    hora3.hora = hora1.hora + hora2.hora;
    hora3.dia = 0;

    if (hora3.seg < 60){
        hora3.seg - 60;
        hora3.min + 1;
    }
    cout << hora3.seg << endl;

    if (hora3.min >= 60){
        hora3.min - 60;
        hora3.hora + 1;
    }

    if (hora3.hora >=24){
        hora3.hora - 24;
        hora3.dia + 1;
    }

    cout << hora3.dia << " Dias e " << hora3.hora << ":" << hora3.min << ":" << hora3.seg;

    return 0;
}
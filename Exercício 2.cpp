/*

2. Escreva um algoritmo que leia a dist�ncia (em Km) e o tempo (em horas) que um
ve�culo percorreu entre um ponto A e um ponto B. Em seguida, indique a
velocidade m�dia do ve�culo durante o trecho percorrido e se a velocidade m�dia
ficou acima do limite de 90 Km/h.


*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    float distance,
          time;

    //First Input Block
    cout << "Enter the traveled distance in kilometers: ";
    cin  >> distance;

    //Second Input Block
    cout << "Enter the travel time in hours: ";
    cin  >> time;

    //Conditional statement to check if the speed is greater than 90km/h
    if ((distance/time)>90){
        cout << "You traveled at a speed greater than 90km/h\t";
    }

    //Output
    cout << "Average speed: " << distance/time << "km/h" << "\tFormula: Distance/Time \n";

    //End
    return 0;
}

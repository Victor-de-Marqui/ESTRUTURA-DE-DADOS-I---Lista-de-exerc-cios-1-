/*

7. Escreva um algoritmo que leia 10 n�meros inteiros e, ap�s a leitura dos n�meros,
informe qual � o maior e qual � o menor.

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    int num,
        aux = 0;

    //For loop to find the highest number with a conditional statement to update an auxiliary variable number
    for (int i = 0; i < 10; i++){
        cout << i+1 << "* Number: ";
        cin  >> num;
        if (num > aux){
            aux = num;
        }
    }

    //Loop Output
    cout << "Highest Number: " << aux;

    //End
    return 0;
}



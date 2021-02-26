/*

6. Escreva um algoritmo que calcule e exiba o fatorial de um número informado pelo
usuário.

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    int num;

    //First Input Block
    cout << "Enter a number to see its factorial: ";
    cin  >> num;
    cout << num << "! = ";

    //For loop until gets its factorial
    for (int i = num-1; i > 0; i--){
        num*=i;
    }

    cout << num;

    //End
    return 0;
}


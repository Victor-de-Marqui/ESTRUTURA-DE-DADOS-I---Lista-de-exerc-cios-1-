/*

4. Escreva um algoritmo que leia um n�mero e indique se o n�mero � par ou �mpar.

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    int num;

    //First Input Block
    cout << "Enter a number: ";
    cin  >> num;

    //Conditional statement to check if the input is a even number or not
    if (num%2==0){
        cout << num << " is even";
    }else{
        cout << num << " is odd";
    }

    //End
    return 0;
}


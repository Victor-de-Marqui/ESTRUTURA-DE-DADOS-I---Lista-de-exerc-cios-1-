/*

8. Escreva um algoritmo que exiba a sequ�ncia de Fibonacci com N n�meros, sendo
N um n�mero informado pelo usu�rio. A sequ�ncia de Fibonacci come�a com 1 e
1 e os n�meros subsequentes s�o obtidos com a soma dos dois n�meros anteriores:
1, 1, 2, 3, 5, 8, 13, ...

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    int n,
        aux,
        x1 = 0,
        x2 = 1;

    //First input block
    cout << "Enter a number: ";
    cin  >> n;
    cout << "Fibonacci(" << n << ") \n";

    //For loop until Fibo(n)
    for (int i = 0; i <= n; i++){

        if (i == 0){
            cout << x1 << " ,";
            continue;
            }
        else if (i == 1){
            cout << x2 << " ,";
            continue;
        }

        aux = x1 + x2;
        cout << aux << ", ";
        x1 = x2;
        x2 = aux;
    }

    //End
    return 0;
}




/*

11. Escreva uma fun��o MulViaAdd() que recebe dois n�meros como par�metros. O
primeiro par�metro pode ser um n�mero real e o segundo par�metro deve ser um
n�mero inteiro. A fun��o deve retornar a multiplica��o entre os par�metros,
por�m, a multiplica��o deve ser feita usando apenas a opera��o de adi��o.

*/

#include <iostream>
using namespace std;


float MulViaAdd(float num1, int num2)
{
    float aux = 0;

    for (int i = 0; i < num2; i++)
    {
        aux=aux+num1;
    }
    return aux;
}


int main(void)
{
    float num1;
    int   num2;

    cout << "Enter the first number: ";
    cin  >> num1;

    cout << "Enter the second number (integer): ";
    cin  >> num2;

    cout << MulViaAdd(num1, num2);

    //End
    return 0;
}

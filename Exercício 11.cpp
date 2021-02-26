/*

11. Escreva uma função MulViaAdd() que recebe dois números como parâmetros. O
primeiro parâmetro pode ser um número real e o segundo parâmetro deve ser um
número inteiro. A função deve retornar a multiplicação entre os parâmetros,
porém, a multiplicação deve ser feita usando apenas a operação de adição.

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

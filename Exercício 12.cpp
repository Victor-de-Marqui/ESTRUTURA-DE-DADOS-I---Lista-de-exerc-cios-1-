/*

12. Escreva uma função Min() que recebe dois parâmetros numéricos e retorna o
menor valor entre eles.

*/

#include <iostream>
using namespace std;

float Min(float num1, float num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    return num2;
}


int main(void)
{
    float num1,
          num2;

    cout << "First number: ";
    cin  >> num1;

    cout << "Second number: ";
    cin  >> num2;

    cout << "Min:" << Min(num1, num2);

    //End
    return 0;
}

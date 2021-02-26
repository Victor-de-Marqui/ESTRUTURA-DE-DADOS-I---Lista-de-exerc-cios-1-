/*

13. Escreva uma função Max() que recebe dois parâmetros numéricos e retorna o
maior valor entre eles.

*/

#include <iostream>
using namespace std;

float Max(float num1, float num2)
{
    if (num1 < num2)
    {
        return num2;
    }
    return num1;
}


int main(void)
{
    float num1,
          num2;

    cout << "First number: ";
    cin  >> num1;

    cout << "Second number: ";
    cin  >> num2;

    cout << "Max:" << Max(num1, num2);

    //End
    return 0;
}

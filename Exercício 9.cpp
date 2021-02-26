/*

9. Escreva um algoritmo que leia 10 números inteiros e, em seguida, exiba-os na
ordem inversa que foram inseridas pelo usuário.

*/

#include <iostream>
using namespace std;

int main(void)
{

    //Variable Declaration
    int vector [10],
        j,
        num;

    cout << "Enter 10 numbers to get an inverted sequence: \n";

    //for loop
    for (int i = 0; i < 10; i++)
    {

        if (i == 0)
        {
            for (j = 0; j < 10; j++)
            {
                cin  >> vector [j];
            }
            cout << "\nInverted sequence: \n";
        }

        cout << "\n" << vector [j-1] ;
        j-=1;
    }

    //End
    return 0;
}







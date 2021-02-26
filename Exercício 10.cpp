/*

10. Escreva um algoritmo que usa um vetor para armazenar 6 números inteiros
informados pelo usuário. Em seguida, ordene os elementos do vetor em ordem
crescente. Por exemplo, caso o vetor contenha os números { 7, 3, 10, 5, 2, 6 }
(nessa ordem), ao final do código o vetor deve armazenar { 2, 3, 5, 6, 7, 10 }
(números em ordem crescente).

*/

#include <iostream>
using namespace std;

int main(void)
{

    int vector [6],
        aux;

    cout << "Enter 6 numbers to get an ordered sequence: \n";

    //Filling the Vector
    for (int i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        cin >> vector[i];
    }

    //Vector Sort
    for (int i = 0; i < sizeof(vector)/sizeof(vector[0]); i++)
    {
        for (int j = i + 1; j < sizeof(vector)/sizeof(vector[0]); j++ )
        {
            if (vector[i] > vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
        cout << vector[i] << ", ";
    }

    //End
    return 0;
}

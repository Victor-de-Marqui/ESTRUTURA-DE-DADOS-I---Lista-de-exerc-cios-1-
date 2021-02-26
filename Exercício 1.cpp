/*

1. Escreva um algoritmo que leia dois números informados pelo usuário. Cada
número deve ser salvo em variáveis distintas, por exemplo, valor1 e valor2. Após
ler os dois números, o algoritmo deve trocar o conteúdo das variáveis.
Exemplo: valor1 armazena o valor 30 e valor2 armazena o valor 50. Após o
algoritmo ser executado, a variável valor1 deve armazenar o valor 50 e a variável
valor2 deve armazenar o valor 30

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    int value1,
        value2,
        aux;

    //First I/O Block
    cout << "Enter the first integer number: ";
    cin  >> value1;

    //Second I/O Block
    cout << "Enter the second integer number: ";
    cin  >> value1;

    //Before Swap
    cout << "\nBefore content swap \nValue 1:" << value1 << "\tValue 2:" << value2;

    //Swapping of variables contents
    aux = value1;
    value1 = value2;
    value2 = aux;

    //After Swapping
    cout << "\n\nAfter content swap \nValue 1:" << value1 << "\tValue 2:" << value2 << "\n";

    //End
    return 0;
}

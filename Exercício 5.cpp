/*

5. Assumindo a equação de reta 3x + y = 8, escreva um algoritmo que leia os valores
para x e y e indique se o ponto (x, y) pertence à reta.

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    int x,
        y;

    //First Input Block
    cout << "3x + y = 8 \n\n5x: ";
    cin  >> x;

    //Second Input Block
    cout << "y: ";
    cin  >> y;

    //Conditional statement to check if a point belongs on a line segment
    if (3*x + y == 8){
        printf("\n(%d,%d) belongs to the line segment", x, y);
    }else{
        printf("(%d,%d) does not belong to the line segment", x, y);
    }

    //End
    return 0;
}


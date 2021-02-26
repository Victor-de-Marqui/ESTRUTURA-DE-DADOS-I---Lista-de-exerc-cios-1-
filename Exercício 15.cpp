
/*

15. Dois círculos se sobrepõem (colidem) se a soma dos seus raios é maior que ou
igual a distância entre seus centros. A distância entre dois pontos pode ser
calculada usando o teorema de Pitágoras (c = √𝑎
2 + 𝑏
2). Escreva uma função
AreCirclesColliding() que recebe seis parâmetros: a posição p1(x,y) e o raio r1 do
primeiro círculo e a posição p2(x,y) e o raio r2 do segundo círculo. Com os
parâmetros informados, a função deve retornar true caso os círculos estejam
sobrepostos ou false caso contrário.

*/

#include <iostream>
#include <math.h>

using namespace std;

bool AreCirclesColliding(int* a, int* b, int* r)
{
    int side1 = a[1] - a[0];
    int side2 = b[1] - b[0];
    int distance = sqrt(pow(side1, 2) + pow(side2, 2));

    if((r[0] + r[1]) >= distance)
        return 1;
    return 0;

}

int main(void)
{

    int  a[2], b[2], r[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Circle number " << i+1 << "\n";
        cout << "a: ";
        cin  >> a[i];

        cout << "b: ";
        cin  >> b[i];

        cout << "Radius: ";
        cin  >> r[i];
        cout << endl;

    }

    bool collision = AreCirclesColliding(a, b, r);

    if (collision)
    {
        cout << "Circles are colliding" << "\n";
    }
    else
    {
        cout << "Circles are not colliding" << "\n";
    }

    return 0;
}

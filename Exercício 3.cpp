/*

3. Escreva um algoritmo que leia uma letra e indique se é uma vogal ou consoante

*/

#include <iostream>
using namespace std;

int main(void){

    //Variable Declaration
    char letter;

    //First Input Block
    cout << "Enter a single letter: ";
    cin  >> letter;

    //Conditional statement to check if the input is a vowel or not
     int vowel[] = {'A','a','E','e','I','i','O','o','U','u'},
        vowelcount;

       for (int j = 0; j < sizeof(vowel)/sizeof(vowel[0]); j++)
            {
                if (letter == vowel[j])
                {
                    cout << letter << " is a vowel";
                    return 0;
                }
            }
            cout << letter << " is a consonant";
}

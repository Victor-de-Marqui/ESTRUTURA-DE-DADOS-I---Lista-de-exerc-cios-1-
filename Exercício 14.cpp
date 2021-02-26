/*

14. Escreva uma função VowelsCount() que recebe uma string como parâmetro e
retorna a quantidade de vogais encontradas na string. Considere que a string é um
vetor de caracteres e use o [] para acessar cada caractere (elemento do vetor).

*/

#include <iostream>
using namespace std;

int VowelsCount(string phrase)
{
    int vowel[] = {'A','a','E','e','I','i','O','o','U','u'},
        vowelcount;

    for (int i = 0; i < phrase.size(); i++)
    {
       for (int j = 0; j < sizeof(vowel)/sizeof(vowel[0]); j++)
            {
                if (phrase[i] == vowel[j])
                {
                    vowelcount+=1;
                }
            }
    }
    return vowelcount;
}


int main(void)
{
    string phrase;

    cout << "Enter some word: ";
    getline(cin, phrase);

    cout << "Vowels Count:" << VowelsCount(phrase);

    //End
    return 0;
}

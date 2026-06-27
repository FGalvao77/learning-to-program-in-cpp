// [PT-BR] Script para exibir o tipo de dados em C++
// [EN] Script to display the data type in C++
#include <iostream>
using namespace std;

int main() {
    int num = 14;       // dado numérico do tipo inteiro | integer-type numeric data
    double num2 = 3.14; // dado numérico do tipo ponto flutuante | floating-point numeric data
    char cha = 'C';     // dado do tipo caractere | character-type data
    bool isTrue = true; // dado do tipo booleano | boolean data type

    // Imprimindo os valores das variáveis | Printing the variable values
    cout << "This is an integer data type: " << num << endl;
    cout << "This is a double data type: " << num2 << endl;
    cout << "This is a character data type: " << cha << endl;
    cout << "This is a boolean data type: " << isTrue << endl;

    return 0;
}

/* 
[PT-BR] Orientação de execução do script:

    1) No terminal, digite o seguinte comando:
        $ g++ 02-data-types.cpp -o 02-data-types

    2) E em seguida:
        $ ./02-data-types.cpp
    
*/

/*
[EN] Script execution instructions:

    1) In the terminal, enter the following command:
        $ 02-data-types.cpp -o 02-data-types

    2) Then:
        $ ./02-data-types.cpp

*/




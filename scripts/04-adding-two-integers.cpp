// [PT-BR] Script para realizar a soma de dois números inteiros e retorna o resultado da operação
// [ENG] Script to sum two integers and return the result of the operation
#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "\nThe sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;

}

/* 
[PT-BR] Orientação de execução do script:

    1) No terminal, digite o seguinte comando:
        $ g++ 04-adding-two-integers.cpp -o 04-adding-two-integers

    2) E em seguida:
        $ ./04-adding-two-integers
    
*/

/*
[EN] Script execution instructions:

    1) In the terminal, type the following command:
        $ g++ 04-adding-two-integers.cpp -o 04-adding-two-integers

    2) And then:
        $ ./04-adding-two-integers

*/


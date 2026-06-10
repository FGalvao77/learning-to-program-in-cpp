// Segundo script - realiza a soma de dois números inteiros
#include <iostream>
int main()
{
    int number1;
    int number2;
    int sum;

    std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}

/* 
Orientação de execução do script:

    1) No terminal, digite o seguinte comando:
        $ g++ 02-adding-two-integers.cpp -o 02-adding-two-integers

    2) E em seguida:
        $ ./02-adding-two-integers
    
*/

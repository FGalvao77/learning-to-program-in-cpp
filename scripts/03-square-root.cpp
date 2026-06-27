// [PT-BR] Script para calcular a raiz quadrada de um número inteiro
// [EN] Script to calculate the square root of an integer
#include <iostream>
#include <cmath>

using namespace std;
using std::sqrt;

int main() {
    double num, square_root;

    cout << "Enter a number: ";
    cin >> num;

    square_root = sqrt(num);
    cout << "The square root of " << num << " is: " << square_root << "\n";
    cout << endl;

    return 0;
}

/* 
[PT-BR] Orientação de execução do script:

    1) No terminal, digite o seguinte comando:
        $ g++ 03-square-root.cpp -o 03-square-root

    2) E em seguida:
        $ ./03-square-root
    
*/

/*
[EN] Script execution instructions:

1) In the terminal, type the following command:
$ g++ 03-square-root.cpp -o 03-square-root

2) And then:
$ ./03-square-root

*/

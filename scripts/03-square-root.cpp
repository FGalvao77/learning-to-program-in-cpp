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
Orientação de execução do script:

    1) No terminal, digite o seguinte comando:
        $ g++ 03-square-root.cpp -o 03-square-root

    2) E em seguida:
        $ ./03-square-root
    
*/

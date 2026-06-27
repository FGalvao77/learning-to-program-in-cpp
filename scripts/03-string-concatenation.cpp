// [PT-BR] Script para concatenar cadeias de caracteres
// [EN] Script to concatenate strings
#include <iostream>
#include <string> // Required for std::string

using namespace std;

int main() {
    string first_name, last_name, full_name; // Use std::string for names

    cout << "Enter your first name: ";
    cin >> first_name; // cin reads a single word into std::string

    cout << "Enter your last name: ";
    cin >> last_name; // cin reads a single word into std::string

    // Concatenate strings with a space
    full_name = first_name + " " + last_name; 
    
    // Add a descriptive output and newline
    cout << "\nYour full name is: " << full_name << "." << endl; 

    return 0;
}

/* 
[PT-BR] Orientação de execução do script:

    1) No terminal, digite o seguinte comando:
        $ g++ 03-string-concatenation.cpp -o 03-string-concatenation

    2) E em seguida:
        $ ./03-string-concatenation
    
*/

/*
[EN] Script execution instructions:

    1) In the terminal, enter the following command:
        $ g++ 03-string-concatenation.cpp -o 03-string-concatenation

    2) Then:
        $ ./03-string-concatenation

*/




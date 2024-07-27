#include <iostream> // Add library for input & output
#include <string>   // Add library for using strings

using namespace std; // Use to avoid prefixing with std::

int main() {
    // Declare variables to store inputs and result
    string str1, str2, result;

    for (int i = 0; i < 3; i++) { // Loop to repeat the process 3 times
        cout << "Enter the first string: ";
        getline(cin, str1);

        cout << "Enter the second string: ";
        getline(cin, str2);

        // Concatenate the strings and store the result in variable
        result = str1 + str2;

        // Print the result string
        cout << "Concatenated string: " << result << endl << endl;
    }

    cout << "Goodbye. ♥" << endl;

    return 0;
}


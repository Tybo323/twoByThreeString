/*
 * twoByThreeStrings.cpp
 *
 *  Created on: Nov 24, 2024
 *      Author: Tyler
 *
 * This program takes two string inputs from user, concatenates,
 * and prints result to the screen.
 * This loops three times total, with varying string lengths.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2, concatenated;

    for (int i = 1; i <= 3; ++i) {
        cout << "Enter string 1 (Attempt " << i << "): ";
        getline(cin, str1);
        cout << "Enter string 2 (Attempt " << i << "): ";
        getline(cin, str2);

        // Concatenate strings
        concatenated = str1 + " " + str2;

        // Print result
        cout << "Concatenated String: " << concatenated << endl;
    }

    return 0;
}






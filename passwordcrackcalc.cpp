#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int passwordLength;
    double charsetSize;
    double crackingSpeed;

    cout << "Enter password length: ";
    cin >> passwordLength;

    cout << "Enter character set size: ";
    cin >> charsetSize;

    cout << "Enter cracking speed (guesses per second): ";
    cin >> crackingSpeed;

    double totalCombinations = pow(charsetSize, passwordLength);
    double timeInSeconds = totalCombinations / crackingSpeed;

    cout << "\n--- Results ---\n";
    cout << fixed << setprecision(0);
    cout << "Total combinations: " << totalCombinations << endl;

    cout << "Estimated cracking time (seconds): " << timeInSeconds << endl;

    // Convert seconds to years for better understanding
    double timeInYears = timeInSeconds / (60 * 60 * 24 * 365);
    cout << "Estimated cracking time (years): " << timeInYears << endl;

    return 0;
}
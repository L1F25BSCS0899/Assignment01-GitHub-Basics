/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Muhammad Ibrahim
 * Reg No     : L1F25BSCS0899
 * Assignment : 01 - Getting Started with GitHub
 */

#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 1; i <= 50; i++) sum += i;
        cout << "Sum using formula n(n+1)/2: " << 50 * (50 + 1) / 2 << endl;

    cout << "Sum of first 50 natural numbers (loop): " << sum << endl;
    return 0;
}


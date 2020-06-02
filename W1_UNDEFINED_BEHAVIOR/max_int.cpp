#include <vector>
#include <iostream>
#include <climits>

using namespace std;

bool TestSigned(int n) {
    return n < n + 1;
}

bool TestUnsigned(unsigned int n) {
    return n < n + 1;
}

int main() {
    cout << boolalpha;
    cout << TestSigned(INT_MAX) << endl;
    cout << TestUnsigned(INT_MAX) << endl;

    return EXIT_SUCCESS;
}
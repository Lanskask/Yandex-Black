#include <iostream>

#define SIZEOF(T) ( \
    cout << #T << ":\t" \
        << "sizeof = " << sizeof(T) << '\n' \
        << "alignof = " << alignof(T) << '\n')

using namespace std;

struct Inner {
    int i;
    char c;
};

struct Outer {
    Inner is1;
    Inner is2;
    char c;
};

int main(int argc, char *argv[]) {
    SIZEOF(Inner);
    SIZEOF(Outer);

    cout << offsetof(Outer, is1) << endl;
    cout << offsetof(Outer, is2) << endl;
    cout << offsetof(Outer, c) << endl;

    return EXIT_SUCCESS;
}
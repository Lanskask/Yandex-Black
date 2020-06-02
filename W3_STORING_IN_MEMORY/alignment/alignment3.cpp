#include <iostream>

#define SIZEOF(T) ( \
    cout << #T << ":\t" \
        << "sizeof = " << sizeof(T) << "; " \
        << "alignof = " << alignof(T) << '\n')

using namespace std;

struct Base1 {
    int i; // 4
    char c; // 1
};

struct Base2 {
    bool i; // 1
    float c; // 4
};

struct Outer : Base1, Base2 {
    short myField; //2
};

int main(int argc, char *argv[]) {
    SIZEOF(Base1);
    SIZEOF(Base2);
    SIZEOF(Outer);

//    cout << offsetof(Outer, myField) << endl;
//    cout << offsetof(Outer, is2) << endl;
//    cout << offsetof(Outer, c) << endl;

    return EXIT_SUCCESS;
}
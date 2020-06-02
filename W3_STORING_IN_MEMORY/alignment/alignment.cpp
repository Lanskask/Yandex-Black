#include <iostream>
#include <array>

#define SIZEOF(T) ( \
    cout << #T << ":\t" \
        << "sizeof = " << sizeof(T) << "; " \
        << "alignof = " << alignof(T) << '\n')


using namespace std;

struct Plate {
    int number; // 4
    char c1; // 1
    char c2;
    char c3;
    int region;
};

struct Plate3 {
    uint16_t number; // 4
    char c1; // 1
    char c2;
    char c3;
    uint16_t region;
};

#pragma pack(push, 1)
struct Plate4 {
    uint16_t number; // 4
    char c1; // 1
    char c2;
    char c3;
    uint16_t region;
};
#pragma pack(pop)

const static int N = 12;
const std::array<char, N> Letters = {
        'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X'
};

struct Plate5 {
    uint16_t number:10; // 4
    uint8_t c1:4; // 1
    uint8_t c2:4;
    uint8_t c3:4;
    uint16_t region:10;
};

struct Plate6 {
    uint32_t number:10; // 4
    uint32_t c1:4; // 1
    uint32_t c2:4;
    uint32_t c3:4;
    uint32_t region:10;
};

static_assert(sizeof(Plate6) == 4, "Wrong size!");

int main(int argc, char *argv[]) {
    SIZEOF(Plate);
    SIZEOF(Plate3);
    SIZEOF(Plate4);
    SIZEOF(Plate5);
    SIZEOF(Plate6);


//    cout << sizeof(Plate) << endl;
//    cout << endl;
//    cout << offsetof(Plate, number) << endl;
//    cout << offsetof(Plate, c1) << endl;
//    cout << offsetof(Plate, c2) << endl;
//    cout << offsetof(Plate, c3) << endl;
//    cout << offsetof(Plate, region) << endl;

    return EXIT_SUCCESS;
}
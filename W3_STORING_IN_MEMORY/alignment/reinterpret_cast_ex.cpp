#include <iostream>

int main() {
    uint32_t value = 0xABCDEF01;
    uint32_t *p = &value;

    uint8_t *p1 = reinterpret_cast<uint8_t*>(p);

    uint8_t* p2 = p1 + 1;
    uint8_t* p3 = p2 + 1;
    uint8_t* p4 = p3 + 1;


    return EXIT_SUCCESS;
}
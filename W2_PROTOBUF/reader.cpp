#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream input("t.bin", ios_base::binary);
    uint32_t value;
    input.read(reinterpret_cast<char*>(&value), sizeof(value));
    cout << "R "  << std::hex << value << '\n';

    return EXIT_SUCCESS;
}

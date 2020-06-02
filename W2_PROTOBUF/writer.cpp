#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ofstream output("t.bin", ios_base::binary);
    const uint32_t value = 305'400'406;
    output.write(
            reinterpret_cast<const char *>(&value), sizeof(value)
    );
    cout << "W " << value << '\n';
    cout << "W " << std::hex << value << '\n';

    return EXIT_SUCCESS;
}
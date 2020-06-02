#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    int value = 5'036'843;
    {
        ofstream out("data.bin");
        out.write(
                reinterpret_cast<char *>(&value),
                sizeof(value)
        );
    }
    {
        value = 1234;
        ifstream in("data.bin");
        in.read(
                reinterpret_cast<char *>(&value),
                sizeof(value)
        );
        cout << "dest: " << value;
    }

//    string data = "abracadabra";
//    {
//        ofstream out("data.bin");
//        out.write(data.c_str(), data.size());
//    }
//    {
//        ifstream in("data.bin");
//        string dest(data.size(), ' ');
//        in.read(dest.data(), dest.size());
//        cout << dest;
//    }

    return EXIT_SUCCESS;
}
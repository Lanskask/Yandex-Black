#include <iostream>
#include <string>
#include <vector>
#include <string_view>

using namespace std;
using std::cout;
using std::endl;

//const string MakeString(const vector<string> &strings) {
//	return strings[0];
//}
//
//int main() {
//    const vector<string> strings = {
//            "c++",
//            "python"
//    };
//
//	const auto& ref = MakeString(strings);
//	cout << ref << endl;
//	return 0;
//}

const int kPnnetsCount = 9;
const std::string_view planets[] = {
        "Mercury", "Venus", "Earth",
        "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"
        ,"Pluto"
};

bool IsAPlanet(std::string_view name) {
    for (int i = 0; i < kPnnetsCount; ++i) {
        if(planets[i] == name)
            return true;
    }
    return false;
}

void Test(std::string_view name) {
    cout << name << " is " << (IsAPlanet(name) ? "" : " NOT")
        << " a planet" << endl;
}

int main(int argc, char *argv[]) {
    Test(planets[0]);
    Test(planets[3]);
    Test(planets[5]);
    Test("Moon");


    return EXIT_SUCCESS;
}
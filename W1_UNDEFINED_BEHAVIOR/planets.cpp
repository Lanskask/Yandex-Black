#include <iostream>
#include <string_view>
#include <string>

using std::cout;
using std::endl;

const int kPnnetsCount = 9;
const std::string planets[] = {
        "Mercury", "Venus", "Earth",
        "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"
        ,"Pluto"
};


bool IsAPlanet(std::string name) {
    for (int i = 0; i < kPnnetsCount; ++i) {
        if(planets[i] == name)
            return true;
    }
    return false;
}


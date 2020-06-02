#include <iostream>

using Alarm = void (*)();

namespace {
    Alarm alarm = nullptr;
}

void HostileAlarm() {
    std::cout << "Atacked with velociraptor" << std::endl;
}

void SetHostileAlarm() {
    std::cout << "Hostile alarm set" << std::endl;
    alarm = HostileAlarm;
}

void Test() {
    alarm();
    std::cout << "Test succeded" << std::endl;
}

int main() {
    Test();
    return EXIT_SUCCESS;
}
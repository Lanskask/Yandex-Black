#include <iostream>
#include <string>

using namespace std;

struct Student {
    string Name;
    double Rating;

    void Print() const {
        cout << Name << " " << Rating << '\n';
    }
};

int main(int argc, char *argv[]) {
    {
        Student s{"Alex", 5.0};;
        s.Print();
    }
    {
        Student *s = new Student{"Alex", 5.0};
        s->Print();
        delete s;
    }
    {
        alignas(Student) char buf[1024];
        Student *s = new(buf) Student{"Alex", 5.0};
        s->Print();
        s->~Student();
    }
    {
//        char *buf = new char[1024];
        void *buf = operator new(sizeof(Student));
        Student *s = new(buf) Student{"Alex", 5.0};
        s->Print();
        s->~Student();
//        delete[] buf;
        operator delete(buf);
    }
    {
        Student s;
        s.~Student();
        new (&s) Student{"Alex", 5.0};
        s.Print();
    }

    return EXIT_SUCCESS;
}
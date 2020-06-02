#include <iostream>
#include <vector>
#include <memory>

#define SIZEOF(T) ( \
    cout << #T << ":\t" \
        << "sizeof = " << sizeof(T) << "; " \
        << "alignof = " << alignof(T) << '\n')


using namespace std;

void PrintPointer(void *object) {
    auto p = reinterpret_cast<size_t *>(object);
    cout << "WPointer ~ " << *p << '\n';
}

struct Animal {
    Animal() {
        cout << "Animal! ";
        PrintPointer(this);
//        Voice();
    }

    ~Animal() {
        cout << "~Animal! ";
        PrintPointer(this);
    }

//    virtual void Voice() const = 0;
    void Voice() const {}

    float weight;
};

struct Mammal : public Animal {
    Mammal() {
        cout << "Mammal! ";
        PrintPointer(this);
    }

    ~Mammal() {
        cout << "~Mammal! ";
        PrintPointer(this);
    }

    char symbol;
};

struct Dog : public Mammal {
    Dog() {
        cout << "Dog! ";
        PrintPointer(this);
    }

    ~Dog() {
        cout << "~Dog! ";
        PrintPointer(this);
    }

//    void Voice() const override {
//        std::cout << "Whaf!\n";
//    }

    uint32_t dogInfo;
};

struct Cat : public Mammal {
    Cat() {
        cout << "Cat! ";
        PrintPointer(this);
    }

    ~Cat() {
        cout << "~Cat! ";
        PrintPointer(this);
    }

//    void Voice() const override {
//        std::cout << "Citty!\n";
//    }

    uint32_t dogInfo;
};

void run1() {
    vector<unique_ptr<Animal>> animals;
    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());
    for (const auto &animal : animals) {
        animal->Voice();
    }
}

void run2() {
    SIZEOF(Animal);
    SIZEOF(Mammal);
    SIZEOF(Cat);
}

void run3() {
    Animal *d = new Dog();
    PrintPointer(d);
}

void run4() {
//    Animal a1, a2;
//    Mammal m1, m2;
    Dog d1, d2;
    Cat c1, c2;

    cout << "\n-- begin: PrintPointer" << endl;
//    PrintPointer(&a1);
//    PrintPointer(&a2);
//    PrintPointer(&m1);
//    PrintPointer(&m2);
    PrintPointer(&d1);
    PrintPointer(&d2);
    PrintPointer(&c1);
    PrintPointer(&c2);
    cout << "\n-- end: PrintPointer" << endl;
}

void run5() {
    Cat c1;
    PrintPointer(&c1);
}

int main(int argc, char *argv[]) {
//    run1();
//    run2();
//    run3();
//    run4();
    run5();

    return EXIT_SUCCESS;
}
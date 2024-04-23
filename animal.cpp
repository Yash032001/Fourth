#include <iostream>
#include <string>

// Base class
class Animal {
public:
    std::string name;
    int age;

    Animal(std::string n, int a) : name(n), age(a) {}

    virtual void makeSound() {
        std::cout << name << " makes a sound." << std::endl;
    }
};

// Derived class
class Mammal : public Animal {
public:
    bool hasFur;

    Mammal(std::string n, int a, bool fur) : Animal(n, a), hasFur(fur) {}

    void makeSound() override {
        std::cout << name << " says: Woof!" << std::endl;
    }
};

// Derived class
class Bird : public Animal {
public:
    bool canFly;

    Bird(std::string n, int a, bool fly) : Animal(n, a), canFly(fly) {}

    void makeSound() override {
        std::cout << name << " says: Tweet!" << std::endl;
    }
};

// Derived class
class Fish : public Animal {
public:
    bool isFreshwater;

    Fish(std::string n, int a, bool freshwater) : Animal(n, a), isFreshwater(freshwater) {}

    void makeSound() override {
        // Fish don't make sounds in the same way birds and mammals do
        std::cout << name << " is silent." << std::endl;
    }
};

int main() {
    Mammal dog("Dog", 5, true);
    Bird sparrow("Sparrow", 2, true);
    Fish goldfish("Goldfish", 1, true);

    dog.makeSound();
    sparrow.makeSound();
    goldfish.makeSound();

    return 0;
}

#include <iostream>
using namespace std;
class Animal {
public:
    virtual void MakeSound()=0;
};
class Dog : public Animal {
public:
    void MakeSound() { cout << "Jestem psem!" << endl; };
};
class Cat : public Animal {
public:
    void MakeSound() { cout << "Jestem kotem!" << endl; };
};

int main(void) {
    //Animal animal;
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    //animal.MakeSound();
    dog->MakeSound();
    cat->MakeSound();
}
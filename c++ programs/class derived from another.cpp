#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking" << endl;
    }
    void giveBirth() {
        cout << "Mammal gives birth to live young ones" << endl;
    }
};

int main(int argc, char** argv) {
    Mammal mammalObj;
    mammalObj.eat();
    mammalObj.giveBirth();
    return 0;
}
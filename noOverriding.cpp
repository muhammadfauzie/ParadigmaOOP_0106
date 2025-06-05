#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base Class" ;
    }
};

class derivedClass : public baseClass {
    public:
    void perkenalan1() override { // Override function
        cout << "Hallo saya Function dari derived Class" ;
    }
};

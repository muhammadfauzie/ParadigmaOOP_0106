#include <iostream>
using namespace std;

class baseClass final {
    public:
    virtual void perkenalan() final {
        cout << "Hallo saya Function dari base Class" ;
    }
};

class baseClass1 {
    public:
    virtual void perkenalan1() {
        cout << "Hallo saya Function dari base Class " ;
    }
};

class derivedClass : public baseClass {
    public:
    void perkenalan()  { 
        cout << "Hallo saya Function dari derived Class" ;
    }
};

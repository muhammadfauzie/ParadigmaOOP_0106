#include <iostream>
using namespace std;

class orang {
    public:
    int umur;
    orang(int pUmur) :
        umur(pUmur) 
    {
        cout << "orang dibuat dengan umur" << umur<<"\n" << endl;
    }
};

class pekerja : public orang {
    public:
    string nama;
    pekerja(int pUmur, string pNama) :
        orang(pUmur), nama(pNama) 
    {
        cout << "pekerja dibuat dengan nama " << nama << " dan umur " << umur << "\n" << endl;
    }
};

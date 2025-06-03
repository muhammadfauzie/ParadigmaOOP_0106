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

class pelajar : virtual public orang {
    public:

    pelajar(int pUmur) :
        orang(pUmur) 
    {
        cout << "pelajar dibuat dengan umur " << umur << "\n" << endl;
    }
};

class  budi : public pekerja, public pelajar {
    public:

    budi(int pUmur, string pNama) :
        pekerja(pUmur, pNama),
        pelajar(pUmur),
        orang(pUmur) // hal ini dapat dilakukan jika menggunakan virtual
    {
        cout << "Budi dibuat\n" << endl;
    }
};
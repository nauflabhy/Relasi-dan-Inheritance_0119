#include <string>
#include <iostream>
#ifndef ANAK_H
#define ANAK_H

using namespace std;

class anak{
    public:
        string nama;
        anak (string pNama): nama (pNama) {
            cout << "Anak \"" << nama << "\" ada\n";
        }

        ~anak() {
            cout << "Anak \"" << nama << "\" tidak ada\n";
        }
};
#endif
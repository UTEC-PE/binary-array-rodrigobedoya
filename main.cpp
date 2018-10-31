#include <iostream>
#include "binary.h"

#define EXIT_SUCCESS 0;
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;


    boolean a(20);

    a.bitOn(13);
    cout << a[13]<< endl;

    a.bitOff(10);
    cout << a[10]<< endl;

    a.bitOff(13);
    cout << a[13]<< endl;


    //system("read");
    return EXIT_SUCCESS;
}


#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>
using namespace std;

class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int size) {
            int chars = size/8+1;
            array = char[chars];
            cout << chars;
        }
        
        void bitOn(int position) {
            // TODO
        }
             
        void bitOff(int position) {
            // TODO
        }
             
        bool operator[](int position) {
            // TODO
        }
    
        void clear() {    
            // TODO
        }
             
        ~boolean() {
            // TODO
        }
};

#endif
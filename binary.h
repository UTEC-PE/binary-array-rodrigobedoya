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
            this-> size = size;
            int chars = size/8+1;
            char arr[chars];
            array = arr;
        }
        
        void bitOn(int position) 
        {
            int char_pos = position/8;

            int pos = position - 8*(char_pos);
            
            char *temp = array + char_pos;

            int tp = (1 << pos) & *temp;
            if(!tp)
            {
                *temp ^= (-1 ^ *temp) & (1UL << pos);
            }
            
        }
             
        void bitOff(int position) 
        {
            int char_pos = position/8;

            int pos = position - 8*(char_pos);
            
            char *temp = array + char_pos;
            int tp = (1 << pos) & *temp;
            if(tp)
            {
                *temp ^= (-0 ^ *temp) & (1UL << pos);
            }
        }
             
        bool operator[](int position) 
        {
            if (position > size)
            {
                throw "ERROR: OUT OF LIMITS";
            }

            int char_pos = position/8;

            int pos = position - 8*(char_pos);
            
            char *temp = array + char_pos;
            
            //int tp = (*temp & (1 << pos));
            int tp = (1 << pos) & *temp;
            return tp;
        }
    
        void clear() 
        {    
            for(int i = 0; i < size; i++)
            {
                bitOff(i);
            }
        }
             
        ~boolean() {
            
        }
};

#endif
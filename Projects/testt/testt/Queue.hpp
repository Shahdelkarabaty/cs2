//
//  Queue.hpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
class Queue {
private:
    int back, size;
    T *arr;
public:
    Queue(int Size)
    {
        back = -1;
        size= Size;
        arr= new T[size];
    }
    bool checkempty()
    {
        if(back < 0)
            return true;
        else
            return false;
    }
    bool push (T value)
    {
        if (back == size - 1)
            return false;
        else
        {
            back++;
            arr[back] = value;
            return true;
        }
    }
    T pop()
    {
        if(!checkempty())
        {
            T temp = arr[0];
            for( int i = 1; i<= back; i++)
            {
                arr[i-1]= arr[i];
            }
            back--;
            return temp;
        }
        
    }
    void print()
    {
        for (int i=0;i<=back; i++)
            cout<<arr[i];
        cout<<endl;
    }
};


#endif /* Queue_hpp */

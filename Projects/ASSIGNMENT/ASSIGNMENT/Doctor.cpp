//
//  Doctor.cpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#include "Doctor.hpp"
Doctor::Doctor()
{
}
Doctor::Doctor(string N, string I, string A)
{
    setname(N);
    setID(I);
    setage(A);
}
bool Doctor::isfree(int hour, int min)
{
    for(int i = 0; i < count; i++)
    {
        if ((DRapp[i].hours==hour)&&(DRapp[i].mins==min))
            return false;
    }
            return true;
}
void Doctor::setappointment(int h, int m)
{
    DRapp[count].hours= h;
    DRapp[count].mins = m;
    count++;
}
string Doctor::getname(string ID)
{
    if(ID==getID())
        return Person::getname();
    return "0";
}

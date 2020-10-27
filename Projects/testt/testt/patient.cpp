//
//  patient.cpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#include "patient.hpp"

Patient::Patient()
{
    
}
Patient::Patient(string NM,string II, string AA, int hh, int mm)
{
    setname(NM);
    setID(II);
    setage(AA);
    A.hours= hh;
    A.mins = mm;
}
bool Patient::operator< (const Patient& P1)
{
    if (A.hours < P1.A.hours)
            return true;
    if ((A.hours ==  P1.A.hours)&&(A.mins < P1.A.mins))
        return true;
    else
        return false;
}
bool Patient::operator> (const Patient& P2)
{
    if (A.hours > P2.A.hours)
        return true;
    if ((A.hours ==  P2.A.hours)&&(A.mins > P2.A.mins))
        return true;
    else
        return false;
}
bool Patient::operator== (const Patient& P3)
{
    if ((A.hours == P3.A.hours)&&(A.mins == P3.A.mins))
        return true;
    else
        return false;
}
void Patient::setappointment(int a, int b)
{
    A.hours = a;
    A.mins = b;
}
void Patient::setdoctorID(string num)
{
    doctorID= num ;
}
int Patient::getappointment()
{
    return A.hours;
    return A.mins;
}

void Patient::print(Doctor arr[5])
{
    
    cout << getname() << " has an appointment at " << A.hours << ":" << A.mins << " with ";
    for(int i=0; i<5; i++)
    {
        if (arr[i].getname(doctorID) != "0")
            cout << arr[i].getname(doctorID);
    }
    cout<<endl;
}

//
//  patient.hpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#ifndef patient_hpp
#define patient_hpp
#include "Person.hpp"
#include "Doctor.hpp"

class Patient: public Person
{
private:
    appointment A;
    string doctorID;
public:
    Patient();
    Patient(string, string, string, int, int);
    bool operator< (const Patient& P1);
    bool operator> (const Patient& P2);
    bool operator== (const Patient& P3);
    void setappointment(int a, int b);
    void setdoctorID(string num);
    int getappointment();
    void print(Doctor arr[5]);
};


#endif /* patient_hpp */

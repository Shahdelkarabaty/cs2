//
//  Doctor.hpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#ifndef Doctor_hpp
#define Doctor_hpp
#include "Person.hpp"


class Doctor: public Person
{
private:
    int count = 0;
    appointment DRapp[12];
public:
    Doctor();
    Doctor(string N, string I, string A);
    bool isfree(int hour, int min);
    void setappointment(int h, int m);
    string getname(string ID);
};


#endif /* Doctor_hpp */

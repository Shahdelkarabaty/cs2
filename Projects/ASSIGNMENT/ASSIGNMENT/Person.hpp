//
//  Person.hpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <string>
#include <iostream>
using namespace std;

struct appointment
{
  int hours=-1;
  int mins=0;
};

class Person
{
private:
    string name, ID, age;
public:
    Person();
    Person(const Person &Px);
    void setname(string);
    void setID(string);
    void setage(string);
    string getname();
    string getID();
    string getage();
    void print();
};

#endif /* Person_hpp */

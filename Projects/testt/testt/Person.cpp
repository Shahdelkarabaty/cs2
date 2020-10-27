//
//  Person.cpp
//  A2
//
//  Created by Shahd Elkarabaty on 10/12/20.
//  Copyright © 2020 Shahd Elkarabaty. All rights reserved.
//

#include "Person.hpp"
Person::Person()
{
    name = "username";
    ID= "0" ;
    age= "0";
    
}

Person::Person(const Person &Px)
{
    name= Px.name ;
    ID= Px.ID ;
    age = Px.age;
    
}

void Person::setname(string Uname)
{
    name = Uname;
}
void Person::setID(string UID)
{
    ID = UID;
}
void Person::setage(string Uage)
{
    age = Uage;
}
string Person::getname()
{
    return name;
}
string Person::getID()
{
    return ID;
}
string Person::getage()
{
    return age;
}
void Person::print()
{
    cout<< name;
    cout<< ID;
    cout<< age;
}

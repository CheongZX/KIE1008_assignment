#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

using namespace std;

class Person
{
public:
    Person(string,int,string);
private:
    string name;
    int ID;
    string email;
};

#endif //PERSON_H_INCLUDED
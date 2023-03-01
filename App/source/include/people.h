#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>
#include <string>
using namespace std;

class People
{
    public:
        explicit People(string name_param);
        People() = default;
        ~People();

        string getName() const{
            return people_name;
        }

        void setName(const string & name){
            people_name = name;
        }

        void printInfo(){
            cout << "People [ name : " << people_name << " ]" << endl;
        }
    
    private:
        string people_name {"None"};

};

#endif //PEOPLE_H
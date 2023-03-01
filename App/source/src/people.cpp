#include "people.h"

People::People(string name_param) : people_name(name_param)
{
    cout << "Constructor for people " << people_name << " called." << endl;
}

People::~People()
{
    cout << "Destructor for people " << people_name << " called." << endl;
}
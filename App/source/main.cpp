#include <iostream>
#include <string>

using namespace std;
int main()
{
    string firstName, lastName;

    cout << "Hello cpp" << std::endl;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Eneter your last name: ";
    cin >> lastName;
    cout << "Your full name is " << firstName + ' ' + lastName;


    return 0;
}
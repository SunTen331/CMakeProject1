#include "fullName.h"
#include "log.h"
#include "people.h"

using namespace std;
int main()
{
    string firstName, lastName, fullName;

    cout << "Hello cpp" << std::endl;
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Eneter your last name: ";
    cin >> lastName;

    fullName = FullName(firstName, lastName);
    cout << "Your full name is " << fullName << ".\n";

    People p1(fullName);
    p1.printInfo();

    log_data("Thank you ", LogType::MESSAGE);

    return 0;
}
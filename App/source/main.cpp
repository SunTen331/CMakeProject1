#include <vector>
#include "fullName.h"
#include "list.h"
#include "log.h"
#include "people.h"

using namespace std;

int main(int arg_count, char *args[])
{ 
    if(arg_count > 1){
        List list;
        list.arg_input = string(args[1]);
        list.print_menu();
        return 0;
    }
    else{
        cout << "There is no arg is passes." << endl;
    }

    string firstName, lastName, fullName;

    cout << "Hello cpp" << endl;
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


#include "list.h"

void List::print_menu()
{
    int choice;

    cout << "\n******************************\n";
    cout << "1 - Print list.\n";
    cout << "2 - Add to list.\n";
    cout << "3 - Delete from list.\n";
    cout << "4 - Quit.\n";
    cout << "Enter your choice and press return: ";

    cin >> choice;

    if(choice == 1){
        print_item();
    }
    else if(choice == 2){
        add_item();
    }
    else if(choice == 3){
        delete_item();
    }
    else if(choice ==4){
        exit(0);
    }
    else{
        cout << "Sorry choice not implemented yet\nQuit now...";
        exit(0);
    }

}

void List::add_item()
{
    cout << "\nType in an item and press enter: ";
    string item;
    cin >> item;

    list.push_back(item);
    cout << "\nSuccessfully added an item to the list.\n";

    print_menu();
}

void List::delete_item()
{
    if(list.size()){
        cout << "\nSelect an item index number to delete.\n";

        cout << "-1: cancel\n";
        for (int i=0; i<list.size(); ++i){
            cout << i << ": " << list[i] << "\n";
        }

        int choice;
        bool validChoice = false;
        while (validChoice == false)
        {
            cin >> choice;

            if (cin.fail())
            {
                cout << "\nInvalid keyin. Please try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
            }
            else if(choice <-1 || choice >= (int)list.size())
            {
                cout << "\nPlease select given index only.\n";
            }
            else
            {
                validChoice = true;
            }
        }

        if (choice != -1){
            list.erase(list.begin() + (int)choice);
        }

    }
    else{
        cout << "No items to delete.\n";
    }

    print_menu();
}

void List::print_item()
{
    cout << "\n*** Printing List ***\n";
    if(list.size()){
        for(int list_index=0; list_index<list.size(); ++list_index){
            cout << " * " << list[list_index] << "\n";
        }
    }
    else{
        cout << "No items in list.\n";
    }

    cout << "Do you want to continue? [Y/N] \n";
    char choice;
    bool validChoice = false;
    while (validChoice == false)
    {
        cin >> choice;
        vector<char> s {'Y','y','N','n'};
        validChoice = (find(s.begin(), s.end(), choice) != s.end());
        
        if(validChoice == false)
        {
            cout << "\nInvalid keyin. Please try again.\n";
            choice = ' ';
        }
    }
    
    if(choice == 'Y' || choice == 'y'){
        print_menu();
    }
    else if(choice == 'N' || choice == 'n'){
        cout << "Quit now.\n";
    }
    else{
        cout << "Invalid Choice. Quiting...\n";
    }
}
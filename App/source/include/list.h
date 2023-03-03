#ifndef LIST_H
#define LIST_H

#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

class List{
    public:
    List(){
        //constructor
    }
    ~List(){
        //destructor
    }

    vector<string> list;
    string arg_input;

    void print_menu();
    void print_item();
    void add_item();
    void delete_item();
};

#endif //LIST_H
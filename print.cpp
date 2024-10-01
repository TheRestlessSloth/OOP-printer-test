#include "print.h"

void printer::print(string str){
    cout << str << endl;
}

void printer::print_self(){
    cout << this->buffer << endl;
}

string printer::read(){
    string out; cin >> out;
    this->buffer = out;
    return out;
}
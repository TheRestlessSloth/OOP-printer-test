#include <iostream>
#include <string>

using namespace std;

class printer{
    private:
        string buffer;
    public:
        void print(string str);
        void print_self();
        string read();
};
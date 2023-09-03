#include <iostream>
#include <map>
#include <String>
#include <list>
using namespace std;
int main()
{
    map<string, list<string>> phonebook;
    phonebook["surya"].push_back("922");
    phonebook["surya"].push_back("912");
    phonebook["surya"].push_back("921");

    phonebook["krishna"].push_back("921");
    phonebook["krishna"].push_back("921");

    for (string phNo : phonebook["surya"])
    {
        cout << phNo << endl;
    }
    return 0;
}
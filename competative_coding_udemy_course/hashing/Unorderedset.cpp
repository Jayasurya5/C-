#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{

    unordered_set<int> s{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int key = 2;

    // insert o(1)
    s.insert(11);
    // erase o(1)
    s.erase(1);
    // unordered_set find works in o(1) time
    // s.end() denotes ending of the set and contains address (value) after the last element of the set
    if (s.find(key) != s.end())
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key not found" << endl;
    }
    // unordered set will be in random ordered
    for (int a : s)
    {
        cout << a << endl;
    }
    return 0;
}
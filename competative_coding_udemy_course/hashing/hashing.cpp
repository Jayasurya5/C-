#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
int main()
{
    // if the elements need not to be in sorted order use unordered_map
    // uses hashing with seperate chaining internally
    // searching -o(1) , insert- o(1), remove- o(1), update element - o(1)
    unordered_map<string, int> hashedmenu;

    // if you want the items to be in a sorted order use map
    // uses balanced tree BST internally
    // searching -o(log(n)) , insert- o(log(n)), remove- o(log(n)), update element - o(log(n))
    map<string, int> menu;

    // insert object
    menu["dosa"] = 12;
    menu["colddrink"] = 20;

    // update object
    menu["dosa"] = menu["dosa"] + 20;

    // erase
    menu.erase("dosa");

    // search
    string itemname;
    itemname = "dosa";

    int price = menu[itemname];
    cout << menu.count(itemname) << endl;
    if (menu.count(itemname) == 0)
    {
        cout << "item not available" << endl;
    }
    else
    {
        cout << menu[itemname] << endl;
    }
    cout << "print prices" << endl;
    for (pair<string, int> item : menu)
    {
        cout << item.first << " of price " << item.second << endl;
    }
    return 0;
}
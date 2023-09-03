#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8}};
    // each row can have different number of elements

    // using for each loop
    cout << "using for each loop" << endl;
    for (vector<int> row : vec)
    {
        for (int value : row)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    vec[0][1] += 20;
    cout << endl
         << "using for loop" << endl;
    // using normal loop
    for (int i = 0; i < vec.size(); i++)
    {
        for (int value : vec[i])
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
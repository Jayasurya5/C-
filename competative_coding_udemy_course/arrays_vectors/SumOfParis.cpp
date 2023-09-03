#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int keyValue = 10;
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = 1; j < vec.size(); j++)
        {
            if ((vec[i] + vec[j]) == keyValue)
            {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}
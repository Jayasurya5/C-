#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    // for number of elements in vector
    cout << "size of vector:" << arr.size() << endl;
    // capacity of the vector: actual size of mem allocated to the array
    cout << "capacity of vector:" << arr.capacity() << endl;
    cout << endl;

    arr = {1, 2, 3, 4, 5, 6};
    cout << "size of vector:" << arr.size() << endl;
    cout << "capacity of vector:" << arr.capacity() << endl;
    cout << endl;

    arr.push_back(19);
    arr.pop_back();
    arr.push_back(12);
    cout << "size of vector:" << arr.size() << endl;
    cout << "capacity of vector:" << arr.capacity() << endl;
    cout << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "print using for each loop" << endl;
    for (int value : arr)
    {
        cout << value << endl;
    }
    // fill constructor
    vector<int> vec1(10, 2);
    return 0;
}

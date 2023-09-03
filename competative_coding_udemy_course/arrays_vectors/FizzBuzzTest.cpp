#include <iostream>
#include <vector>
#include <string>
using namespace std;
std::vector<string> fizzBuzzTest(int n)
{
    std::vector<string> vec;
    for (int value = 1; value <= n; value++)
    {
        if (value % 3 == 0 && value % 5 == 0)
        {
            vec.push_back("FizzBuzz");
        }
        else if (value % 3 == 0)
        {
            vec.push_back("Fizz");
        }
        else if (value % 5 == 0)
        {
            vec.push_back("Buzz");
        }
        else
        {
            vec.push_back(to_string(value));
        }
    }
    return vec;
}
int main()
{
    int n = 20;
    vector<string> result = fizzBuzzTest(n);
    for (string value : result)
    {
        cout << value << endl;
    }
    return 0;
}
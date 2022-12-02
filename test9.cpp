#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> n = {1, 2, 3, 4, 5};
    for (auto &c : n)
    {
        cout << c << " ";
    }
}
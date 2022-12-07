#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    for (int n : v)
    {
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }

    return 1;
}
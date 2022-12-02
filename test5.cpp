#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
    int m = 1;
    if (n == 1)
        return 1;
    for (int i = 1; i <= 12; i++)
    {
        if (m > n)
            return i - 2;
        else
            m *= i;
    }
    return -1;
}

int main()
{
    cout << solution(3628800) << endl;
    return 1;
}
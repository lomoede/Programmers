#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    while (a != 1)
    {
        int i = 2;
        while (1)
        {
            if (a % i == 0)
            {
                a /= i;
                if (b % i == 0)
                    b /= i;
                break;
            }
            i++;
        }
    }

    while (b % 2 == 0 || b % 5 == 0)
    {
        if (b % 2 == 0)
            b /= 2;
        if (b % 5 == 0)
            b /= 2;
    }
    if (b == 1)
        return 1;
    else
        return 2;
}

int main()
{
    cout << solution(12, 21) << endl;

    return 1;
}
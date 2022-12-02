#include <string>
#include <vector>
#include <iostream>

using namespace std;

int combination(int n, int r)
{
    if (r == 1)
        return n;
    else if (n == r)
        return 1;
    else
        return combination(n - 1, r) + combination(n - 1, r - 1);
}

int solution(int balls, int share)
{
    return combination(balls, share);
}

int main()
{
    cout << combination(3, 2);
    return 1;
}

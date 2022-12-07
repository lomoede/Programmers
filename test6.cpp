#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int chicken)
{
    int answer = 0;
    while (chicken >= 10)
    {
        cout << chicken << endl;
        answer += chicken / 10;
        chicken = chicken / 10 + chicken % 10;
    }

    return answer;
}

int main()
{
    cout << solution(1081) << endl;
    return 1;
}
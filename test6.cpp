#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k)
{
    int answer = 0;
    string s;
    string key = to_string(k);
    for (int l = i; l <= j; l++)
    {
        s = to_string(l);
        answer += count(s.begin(), s.end(), to_string(k).back());
        cout << "s = " << s << ", count = " << count(s.begin(), s.end(), to_string(k).back()) << endl;
    }
    return answer;
}

int main()
{
    cout << solution(1, 13, 1) << endl;
    return 1;
}
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic)
{
    int answer = 0;
    map<string, int> m;
    int size = spell.size();
    int value;
    for (string d : dic)
    {
        value = 0;
        if (d.size() == size)
            for (string s : spell)
            {
                if (count(d.begin(), d.end(), s.front()) == 1)
                    value++;
            }
        if (value == size)
            return 1;
    }
    return 2;
}

int main()
{
    vector<string> spell = {"z", "d", "x"};
    vector<string> dic = {"def", "dww", "dz", "loveaw"};
    cout << solution(spell, dic) << endl;

    return 1;
}
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <regex>

using namespace std;

long long solution(string numbers)
{
    long long answer = 0;
    map<string, string> m;
    m["one"] = "100";
    m["two"] = "200";
    m["three"] = "30000";
    m["four"] = "4000";
    m["five"] = "5000";
    m["six"] = "600";
    m["seven"] = "70000";
    m["eight"] = "80000";
    m["nine"] = "9000";

    for (map c : m)
    {
        regex_replace(numbers, c.first, c.second);
    }
    return answer;
}
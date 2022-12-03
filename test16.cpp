#include <iostream>
#include <vector>
#include <map>

using namespace std;

int cal(vector<pair<int, int>> route, int n)
{
    int i = 0;
    int tmp_1 = 0;
    int tmp_2 = 0;
    int tmp_3 = 0;

    while (1)
    {
        i++;
        if (i > 5)
            i = 0;
        if (route[i].first == n)
            break;
    }

    cout << "i = " << i << endl;

    tmp_1 = route[i].second;
    i++;
    if (i > 5)
        i = 0;
    tmp_2 = route[i].second;
    tmp_3 = tmp_1 * tmp_2;
    cout << tmp_3 << endl;
    i += 2;
    if (i > 5)
        i -= 6;

    tmp_1 = route[i].second;
    i++;
    if (i > 5)
        i = 0;
    tmp_2 = route[i].second;
    tmp_3 -= tmp_1 * tmp_2;
    cout << tmp_3 << endl;
    return tmp_3;
}

int main()
{
    int K, x = 0, y = 0;
    cin >> K;
    vector<pair<int, int>> route;
    int type;
    int a, b;

    for (int i = 0; i < 6; i++)
    {
        cin >> a >> b;
        route.push_back({a, b});
    }

    map<int, int> m;
    for (pair<int, int> p : route)
    {
        m[p.first]++;
    }

    if (m[1] + 2 * m[2] + 3 * m[3] + 4 * m[4] == 14)
        type = 1;
    else if (m[1] + 2 * m[2] + 3 * m[3] + 4 * m[4] == 16)
        type = 3;
    else if (m[1] == 2)
        type = 2;
    else
        type = 4;

    if (type == 1)
        cout << K * cal(route, 4) << endl;
    if (type == 2)
        cout << K * cal(route, 2) << endl;
    if (type == 3)
        cout << K * cal(route, 3) << endl;
    if (type == 4)
        cout << K * cal(route, 1) << endl;

    cout << type << endl;
}
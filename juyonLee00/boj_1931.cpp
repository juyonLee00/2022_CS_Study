#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector< pair < int, int > > v;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back(make_pair(end, start));
    }

    sort(v.begin(), v.end());

    int end_min = v[0].first;
    int ans = 1;

    for(int i = 1; i < n; i++)
    {
        if(end_min <= v[i].second)
        {
            ans += 1;
            end_min = v[i].first;
        }
    }
    cout << ans << '\n';
}
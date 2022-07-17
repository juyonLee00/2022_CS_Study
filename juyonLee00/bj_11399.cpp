#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int ans = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int time;
        cin >> time;
        v.push_back(time);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        ans = ans + v[i] * (n - i);
    }

    cout << ans << '\n';
}
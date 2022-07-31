#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    vector<char> ans;
    int seq[100001];
    int idx = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }

    for(int i = 1; i <= n; i++)
    {
        v.push_back(i);
        ans.push_back('+');

        while(!v.empty() && v.back() == seq[idx])
        {
            v.pop_back();
            ans.push_back('-');
            idx+=1;
        }
    }
    if(!v.empty()) cout << "NO" << '\n';
    else
    {
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << '\n';
    }
}


//해당 링크 참조 https://cocoon1787.tistory.com/231
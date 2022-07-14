#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    vector<int> v;
    int ans = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    
    int v_size = v.size()-1;
    int sub_cal = 0;

    for(int i = v_size; i >=0; i--)
    {
        if(v[i] > k) 
            continue;
        else if(v[i] == k) 
        {
            ans += 1;
            break;
        }
        else if(v[i] < k)
        {
            while(sub_cal < k){
                sub_cal = sub_cal + v[i];
                ans += 1;
                
            }
            if(sub_cal == k) break;
            sub_cal -= v[i];
            ans -= 1;
            continue;
        }
        
    }
    cout << ans << '\n';

}


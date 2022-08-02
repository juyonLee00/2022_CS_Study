#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int test_case;

    cin >> test_case;

    for(int i = 0; i < test_case; i++)
    {
        int n, m;
        cin >> n >> m;

        queue<pair < int, int > > q;
        priority_queue<int> pq;

        for(int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            q.push({j, num});
            pq.push(num);
        }

        int cnt = 0;
        while(!q.empty())
        {
            int idx = q.front().first;
            int value = q.front().second;
            q.pop();
            if(pq.top() == value)
            {
                pq.pop();
                cnt+=1;
                if(idx == m)
                {
                    cout << cnt << '\n';
                    break;
                }
            }
            else 
            {
                q.push({idx, value});
            }
        }
    }
    
}
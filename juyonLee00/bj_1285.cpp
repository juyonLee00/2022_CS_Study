#include <iostream>
#include <string>
#define MAX 20

using namespace std;

int main()
{
    char arr[MAX][MAX];
    string str;
    int ans1 = 0;
    int ans2 = 0;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> str; //이거 입력받는 부분 수정해야 함.
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = str[j];
        }
    }
    

    char t_arr[n];
    //행먼저 돌려보기 - 가장 T 많은 행부터 바꾸기
for(int k = 0; k < n; k++) //비교할 행의 현재 위치
{
    for(int i = 0; i < n; i++)
    {
        //행별로 T값 저장하기
        int t_cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == 'T') t_cnt +=1;
        }
        t_arr[i] = t_cnt;
        cout << t_arr[i] << " 행별 t값" << '\n'; 
    }

    //배열 최대값 갖는 idx 찾기 -> 배열 값대로 정렬한 다음 그 배열 idx찾아도 좋을 듯한데 이건 make_pair로 만든 다음에 해야 할듯?
    int t_max_idx = 0;
    for(int i = 0; i < n; i++)
    {
        if(t_arr[t_max_idx] < t_arr[i])
        {
            t_max_idx = i;
        }
    }

    //최대값이 1일 경우 값 구하고 빠져나오기
    if(t_arr[t_max_idx] == 1) 
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(arr[i][j] == 'T') ans1 += 1;
            }
        }
        cout << ans1 << '\n';
        break;
    }

    //t_max_idx 배열값 바꾸기
    for(int i = 0; i < n; i++)
    {
        if(arr[t_max_idx][i] == 'T' ) arr[t_max_idx][i] == 'H';
        else arr[t_max_idx][i] == 'T';
    }

}

}
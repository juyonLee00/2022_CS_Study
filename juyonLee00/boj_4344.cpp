#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
    int c;
    
    scanf("%d", &c);

    for(int i = 0; i < c; i++){
        int n;
        int sum = 0;
        int count_score = 0;
        float ans = 0.0;
        float avg = 0.0;
        vector<int> score_v;

        scanf("%d",&n);
        for(int j = 0; j < n; j++){
            int score;
            scanf("%d", &score);
            sum += score;
            score_v.push_back(score);
        }
        avg = (float)sum / (float)n;

        for(int j = 0; j < n; j++){
            if(avg < score_v[j]) count_score+=1;
        }
        ans = (float)count_score / (float)n * 100;
        printf("%.3f%% \n", ans);
    }
    
}
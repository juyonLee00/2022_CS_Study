#include <string>
#include <vector>
#include <map>
#include <string>
#include <set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);

    map<string, int> cnt_report;
    map<string, set<string>> idx_report;

    for(int i = 0; i < id_list.size(); i++){
        cnt_report[id_list[i]] = i;
    }

    for(auto idx : report){
        stringstream ss(idx);
        string from, to;
        ss >> from >> to;

        idx_report[to].insert(from);
    }

    for(auto it : idx_report){
        if(it.second.size() >= k){
            for(auto in_it : it.second){
                answer[cnt_report[in_it]]++;
            }
        }
    }

    return answer;
}


//https://wadekang.tistory.com/6 코드 참조

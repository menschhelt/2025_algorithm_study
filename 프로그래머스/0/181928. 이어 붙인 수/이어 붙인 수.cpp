#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd = "";
    string even = "";
    for (int i=0 ; i<num_list.size() ; i++){
        int r = num_list[i] %2 ;
        if(r){odd += to_string(num_list[i]);}
        else{even += to_string(num_list[i]);}
    }
    answer += stoi(odd) + stoi(even);
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    auto index = queries.begin();
    for (auto query = queries.begin() ; query < queries.end() ; query++){
        int s = (*query)[0] ; 
        int e = (*query)[1]; 
        for (int i =s ; i<=e ; i++){
            answer[i] += 1;
        }
    }
    return answer;
}
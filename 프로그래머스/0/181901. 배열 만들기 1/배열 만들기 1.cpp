#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int temp = k;
    if (n < k){
        return answer;
    }
    //else 
    while (temp <= n){
        if(temp % k == 0){
            answer.push_back(temp);
            temp += k;
        }
    }
    return answer;
}
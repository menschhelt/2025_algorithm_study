#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    answer = arr;
    int len = arr.size();
    for (int i =0; i<arr.size() ; i++){
        if(len%2 ==0){
            if(i%2 ==0){continue;}
            else{answer[i] += n;}
        }
        else{
            if(i%2 == 1){continue;}
            else{answer[i] += n;}
        }
    }

    return answer;
}

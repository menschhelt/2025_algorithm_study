#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    int len = arr[0].size();
    for (int i  = 0 ;i < len ; i++){
        for (int j = i+1 ; j< len ; j++){
            if (arr[j][i] != arr[i][j]) {return 0;}
        }
    }
    return 1;
}
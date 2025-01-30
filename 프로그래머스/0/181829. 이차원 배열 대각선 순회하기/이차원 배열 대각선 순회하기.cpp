#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) {
    int answer = 0;
    for (int i=0; i<=k; i++){
        if (i == board.size()){
            break;
        }
        for (int j =0 ; j<=k-i ; j++){
            if(j == board[i].size()){
                break;
            }
            answer += board[i][j];
        }
    }
    return answer;
}
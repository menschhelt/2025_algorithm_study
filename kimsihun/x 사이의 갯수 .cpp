#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int past; // 0이면 x, 1이면 그외
    int cnt = 0;
    for (int i=0; i<myString.size() ; i++){
        if(myString[i] == 'x'){
            if (i == myString.size() -1){
                answer.push_back(cnt);
                answer.push_back(0);
            }
            else {
                if(past){answer.push_back(cnt); cnt = 0; }
                else{answer.push_back(0); cnt = 0;}
                past = 0;
            }            
        }
        else { // o
            cnt++;
            past = 1;
            if(i == myString.size()-1){
                answer.push_back(cnt);
            }
        }
    }
    return answer;
}

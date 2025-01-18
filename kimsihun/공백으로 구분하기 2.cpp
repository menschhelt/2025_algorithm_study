#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    bool past_  = 1; // 이전이 공백이다
    string temp = "";
    
    for (int i =0; i<my_string.size(); i++){        
        if(my_string[i] == ' '){
            if(past_){continue;} // 현재는 공백, 과거도 공백
            else{// 현재는 공백, 과거는 문자
                answer.push_back(temp);
                temp = "";
                } 
            past_ = 1;
        }
        else{ // 현재 문자
            past_ = 0;
            temp += my_string[i];
        }
    }
    if(temp != ""){
        answer.push_back(temp);
    }
    return answer;
}

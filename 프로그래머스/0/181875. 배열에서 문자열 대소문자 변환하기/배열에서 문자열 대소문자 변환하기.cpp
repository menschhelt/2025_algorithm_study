#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i<strArr.size() ; i++){
        string str = strArr[i];
        string temp = "";
        if( i%2 ==0){
            for (int j =0; j< str.size() ; j++){
                if(int(str[j]) >= 65 && int(str[j]) <= 90){temp+= char(int(str[j]) + 32);}
                else { temp += str[j];}
            }
        }
        else {
            for (int j =0; j< str.size() ; j++){
                if(int(str[j]) >= 97 && int(str[j]) <= 122){temp+=char(int(str[j]) - 32);}
                else { temp += str[j];}
            }
        }
        answer.push_back(temp);
    }
    return answer;
}
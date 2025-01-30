#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int not_a = 0;
    string a = "";
    string b = "";
    int op_index = 0;
    for (int i = 0 ;i<binomial.length() ; i++){
        char temp = binomial[i];
        if(not_a){
            if( temp <= 57 && temp >= 48){
                b += temp;
            }
        }
        else {
            if( temp <= 57 && temp >= 48){
                a += temp;
            }
            else if (temp != ' ') {
                op_index = i ;
                not_a = 1;
             }
        }
    }
    
    if (binomial[op_index] == '+') { return stoi(a)+stoi(b);}
    else if (binomial[op_index] == '*') { return stoi(a)*stoi(b) ;}
    else if (binomial[op_index] == '-') { return stoi(a)-stoi(b) ;}
    return answer;
}
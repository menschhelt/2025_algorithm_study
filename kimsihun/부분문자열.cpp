#include <string>
#include <vector>

using namespace std;


int solution(string str1, string str2) {
    int answer;
    for (int i =0; i<str2.size() - str1.size() +1; i++){
        answer = 1;
        for (int j =0; j<str1.size(); j++){
            if(str2[i+j] != str1[j]){
                answer = 0;
                break;
            }
        }
        if (answer == 1){
            return answer;
        }
    }
    return 0;
}

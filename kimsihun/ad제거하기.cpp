#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    int count =0;
    for (int i =0; i< strArr.size() ; i++){
        string str = strArr[i];
        //ad
        bool cont_ad = 0;
        for (int i =0; i<str.size() - 2 +1; i++){
            if(str[i] == 'a' && str[i+1] == 'd'){
                cont_ad = 1;
            }
        }
        if(cont_ad){
            continue;
        }
        else {
            answer.push_back(str);
            count++;
        }
    }
    return answer;
}

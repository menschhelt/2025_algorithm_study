#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp = "";
    for (char c : myString) {
        if (c == 'x') {
            if (!temp.empty()) { 
                answer.push_back(temp);
            }
            temp = ""; // 초기화
        } else {
            temp += c;
        }
    }

    // 마지막 문자열 
    if (!temp.empty()) {
        answer.push_back(temp);
    }

    // 버블 정렬 
    for (size_t i = 0; i < answer.size(); i++) {
        for (size_t j = i + 1; j < answer.size(); j++) {
            if (answer[i] > answer[j]) {
                swap(answer[i], answer[j]);
            }
        }
    }
    return answer;
}
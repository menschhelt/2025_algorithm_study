#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for (int i =0; i<num_str.size() ; i++){
        answer += int(num_str[i]) - 48;
    }
    return answer;
}

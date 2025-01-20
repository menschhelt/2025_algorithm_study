#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] == alp[0]) { // alp의 첫 번째 문자와 비교
            if (my_string[i] >= 'a' && my_string[i] <= 'z') { // 소문자인 경우에만 변환
                my_string[i] = my_string[i] - ('a' - 'A'); // 대문자로 변환
            }
        }
    }
    return my_string;
}
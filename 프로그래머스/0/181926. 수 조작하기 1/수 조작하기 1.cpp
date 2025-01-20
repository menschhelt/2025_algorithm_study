#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for (int i =0; i<control.size() ; i++){
        char str = control[i];
        if (str == 'w') answer ++;
        else if (str == 's') answer --;
        else if (str == 'd') answer += 10;
        else answer -= 10;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
    if(number% m ==0 && number % n ==0){ return 1;}
    else {return 0;}
    return answer;
}
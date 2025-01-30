#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    int d1 = stoi(to_string(date1[0]) + to_string(date1[1]) + to_string(date1[2]));
    int d2 = stoi(to_string(date2[0]) + to_string(date2[1]) + to_string(date2[2]));
    answer = (d1<d2) ? 1 : 0;
    return answer;
}
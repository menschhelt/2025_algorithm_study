#include <string>
#include <vector>
using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for (const string& elem : str_list) {
        if (elem.find(ex) == string::npos) {
            answer += elem;
        }
    }
    return answer;
}
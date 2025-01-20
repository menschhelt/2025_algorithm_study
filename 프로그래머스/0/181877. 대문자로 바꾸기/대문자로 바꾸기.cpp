#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i =0; i<myString.size() ; i++){
        char chr = myString[i];
        if (chr >= 'a' && chr <= 'z'){
            answer += char( int(chr) - int('a') + int('A'));
        }
        else {answer += chr;}
    }
    return answer;
}
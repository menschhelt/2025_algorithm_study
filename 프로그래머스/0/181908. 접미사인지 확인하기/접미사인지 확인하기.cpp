#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    if (is_suffix.size() > my_string.size()){ return 0;}
    else{
        for (int i =0; i<is_suffix.size() ; i++){
            if(is_suffix[is_suffix.size()-i-1] != my_string[my_string.size()-1-i]){return 0;}
        }
        return 1;
    }
    return answer;
}
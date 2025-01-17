#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string n_str) {
    int answer = 0;
    int k = n_str.size()-1;
    for (int i =0; i< n_str.size() ; i++){
        int exp =1;
        for (int j = k; j > 0; j--){
            exp *= 10;
            std::cout << exp << std::endl;
        }
        k--;
        answer += exp * (int(n_str[i]) - 48);
    }
    return answer;
}

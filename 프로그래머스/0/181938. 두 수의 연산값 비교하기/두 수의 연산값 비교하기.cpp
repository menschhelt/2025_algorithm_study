#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    vector<int> l; 
    int s = 0;
    int a_copy = a;
    int b_copy = b;
    while (b_copy>0){
        l.push_back(b_copy % 10);
        b_copy/= 10; 
    }
    while (a_copy  > 0){
        l.push_back(a_copy % 10);
        a_copy/= 10;
    }
    for (int i =0; i<l.size() ; i++){
        s += l[i] * pow(10 , i);
    }
    answer = (s > 2*a*b) ? s : 2*a*b;
    return answer;
}
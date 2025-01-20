#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd_s=0; 
    int even_s = 0;
    for (int i =0; i<num_list.size(); i++){
        if(i%2 == 0){ odd_s += num_list[i];}
        else { even_s += num_list[i];}
    }
    if( even_s >= odd_s){return even_s;}
    else {return odd_s;}
    return answer;
}
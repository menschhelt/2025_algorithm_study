#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    for (int i =0; i<num_list.size() -1; i++){
        for (int j =0 ; j<num_list.size()-1-i; j++){
            if (num_list[j+1] < num_list[j]){
                int temp;
                temp = num_list[j+1];
                num_list[j+1] = num_list[j];
                num_list[j] = temp;
            }
        }
    }
    for (int i =5; i<num_list.size(); i++){
     answer.push_back(num_list[i]);   
    }
    return answer;
}

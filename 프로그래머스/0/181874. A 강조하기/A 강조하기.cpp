#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i =0 ; i< myString.size() ; i++){
        // cout << int(myString[i]) << " ";
        if(myString[i] == 'a' || myString[i] == 'A'){
            myString[i] = 'A';
        }
        else if(int(myString[i]) >= 66 && int(myString[i]) <=90)
        {
            myString[i] = myString[i] - 65 + 97;
        }
    }
    answer = myString;
    return answer;
}
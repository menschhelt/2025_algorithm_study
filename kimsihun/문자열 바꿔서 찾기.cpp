#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    if(myString.size() >= pat.size()){
        for (int i =0; i <= myString.size() - pat.size(); i++){
            bool match = true;
            for (int j =0; j<pat.size() ; j++){
                if(myString[i+j]  == pat[j]){
                    match = false; 
                    break;
                }
            }
            if(match){
                return 1;
            }
        }
        return 0;

    }
    else{
        return 0;
    }
}

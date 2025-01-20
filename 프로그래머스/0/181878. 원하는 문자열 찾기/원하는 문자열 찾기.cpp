#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    if (myString.size() < pat.size()){ return 0;}
    else{
        for (int i =0; i<myString.size()-pat.size()+1 ; i++){
            bool contain = 1;
            for (int j=0; j < pat.size() ; j++){
                if( !(pat[j] == myString[i+j] || (int(pat[j]) - int(myString[i+j]) == 32 ) || (int(pat[j]) - int(myString[i+j]) == -32 ))){
                    contain = 0;
                    continue; // 다음 스캔 필요
                }
            }
            if(contain){return 1;}
        }        
    }
    return 0;
}
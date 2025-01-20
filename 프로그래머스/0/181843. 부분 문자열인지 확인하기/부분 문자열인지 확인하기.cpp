#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    if(target.size() > my_string.size()){return 0;}
    else{
        for (int i =0; i<=my_string.size() - target.size() ; i++){
            bool contain = 1;
            for (int j =0; j<target.size() ; j++){
                if(target[j] !=my_string[i+j]){
                    contain = 0; break;
                }
            }
            if(contain){
               return 1; 
            }
        }
        return 0;
    }
}
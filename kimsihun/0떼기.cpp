#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* n_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int index = 0;
    int len_con_zeros = 0;
    while(true){
        if(n_str[0] == '0'){
            if(n_str[index] == '0'){
                len_con_zeros++;
                if(n_str[index+1] == '0'){
                    index++;
                    continue;
                }
                else{
                    break;
                }
            }
            else {
                len_con_zeros = 1;
            }
            len_con_zeros++;
            index ++;
            continue;
        }
        else {
            return n_str;
        }
    } 
    
    char* answer = (char*)malloc((10+1) * sizeof(char));
    for (int i =0; i<10 ; i++){
        answer[i] = n_str[len_con_zeros + i];
    }
    return answer;
}

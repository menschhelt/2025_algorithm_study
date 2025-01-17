#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int length = 0;
    int count = 0;
    int temp_n = n;
    
    while(temp_n / 10 > 0){
        length++;
        temp_n /= 10;
    }

    length++;    

    char* answer = (char*)malloc((length+1)*sizeof(char));
    
    while(n / 10 > 0){
        answer[length - count-1] = (n%10) + '0'; // 0의 아스키 넘버를 더함 
        count ++;
        n /= 10;
    }
    answer[0] = (n%10) + '0';
    answer[length] = '\0';
    return answer;
}

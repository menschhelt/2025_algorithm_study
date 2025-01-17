#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// delete_list_len은 배열 delete_list의 길이입니다.
int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len * sizeof(int));
    int count = 0;
    
    for (int i =0 ; i<arr_len; i++ ){
        int isin = 0;
        for(int j=0; j<delete_list_len ; j++ ){
            if(delete_list[j] == arr[i]){ // delete에 있음
                isin = 1;
                break;
            }
        }
        if(!isin){
            answer[count] = arr[i];
            count++;
        }
    }
    return answer;
}

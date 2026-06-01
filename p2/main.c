#include <stdio.h>

int main(){
    int N;
    int arr1[20]; // 첫번째 숫자 배열
    int arr2[20]; // 두번째 숫자 배열

    scanf("%d", &N); // 정수N입력

    for (int *p = arr1; p<arr1+N; p++){ // 첫번째 배열에 숫자 차례로 넣기
        scanf("%d", p);
    }

    for (int *p==arr2; p < arr2+N; p++){ // 두번째 배열에 숫자 차레로 넣기
        scanf("%d", p);
    }

    int *p1=arr1; // 첫번째 배열의 맨처음
    int *p2=arr2+N-1; // 두번째 배열의 맨끝

    for (int i=0; i<N; i++){
        int sum = *p1+*p2; // 첫배열의 맨처음 + 두번째배열의 맨끝
        printf(" %d", sum); // 출력시 공백 먼저 출력

        p1++; // 다음 칸으로 이동
        p2--; // 이전 칸으로 이동
    }
    printf("\n");

    return 0;
}

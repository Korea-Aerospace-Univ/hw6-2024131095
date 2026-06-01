#include <stdio.h>

int main(){
    int N;
    int arr1[20]; // 첫번째 숫자 배열
    int arr2[20]; // 두번째 숫자 배열
    int *p = nullptr;
    int *p1 = nullptr;
    int *p2 = nullptr;

    scanf("%d", &N); // 정수N입력

    for (p = arr1; p < arr1 + N; p++){ // 첫번째 배열에 숫자 차례로 넣기
        scanf("%d", p);
    }

    for (p = arr2; p < arr2 + N; p++){ // 두번째 배열에 숫자 차레로 넣기
        scanf("%d", p);
    }

   for (p1 = arr1, p2 = arr2 + N -1; p1 < arr1 +N; p1++, p2--){
    int sum = *p1 + *p2;
    printf(" %d", sum);
   }
    printf("\n");

    return 0;
}

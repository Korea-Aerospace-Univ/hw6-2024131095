#include <stdio.h>

int main(){
    char arr[11]; // 10개의 문자를 저장할 배열
    scanf("%s", arr); //10개의 문자 입력

    char max_char = arr[0]; //가장 많이 나타난 문자를 저장할 변수
    int max_count = 0; //그 빈도수를 저장할 변수

    for (char *p = arr; p < arr + 10; p++) { //외부 반복분용 포인터 (배열의 처음부터 끝까지 이동)
        int current_count = 0;

    for (char*q=arr; q<arr+10; q++){ // 내부 반복문용 포인터 (q가 가리키는 문자가 배열에 몇 개 있는지 찾음)
        if(*p==*q){
            current_count++;
        }
    }
    if (current_count > max_count){ // 현재 문자의 빈도수가 이전 최대 빈도수보다 클때만 갱신 (빈도수가 같을때 먼저 나타난 문자 유지 위함)
        max_count = current_count;
        max_char = *p;
    }
    }
    printf("%c %d\n", max_char, max_count); // 결과 출력
    return 0;
}

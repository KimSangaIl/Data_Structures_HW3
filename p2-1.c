#include <stdio.h>

#define MAX_SIZE 100    //MAX_SIZE의 값을 100으로 지정

float sum(float [], int);   //반환형이 float이고 float형 배열과 int형 변수를 매개 변수로 갖는 sum 함수 선언
float input[MAX_SIZE], answer;  //크기가 MAX_SIZE인 float형 전역 배열 input과 float형 전역 변수 answer 선언
int i;  //int형 전역 변수 i 선언
void main(void)
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    for(i=0; i < MAX_SIZE; i++) //0부터 MAX_SIZE-1까지 반복
        input[i] = i;   //배열의 i+1번째 값을 i로 초기화

    /* for checking call by reference */
    printf("address of input = %p\n", input);   //input 값은 배열의 첫번째 값의 주소 값과 같으므로 input[0]의 주소 값을 출력

    answer = sum(input, MAX_SIZE);  //변수 answer의 값을 sum 함수에 input 배열과 MAX_SIZE를 전달해서 반환된 값으로 초기화
    printf("The sum is: %f\n", answer); //변수 ansswer의 값을 출력
}

float sum(float list[], int n)
{
    printf("value of list = %p\n", list);       //매개 변수로 배열 input을 전달 받았으므로 input의 값인 input[0]의 주소 값을 출력
    printf("address of list = %p\n\n", &list);  //매개 변수인 input 배열의 값을 저장한 곳의 주소 값을 출력

    int i;  //int형 변수 i 선언
    float tempsum = 0;  //float형 변수 tempsum 선언 및 0으로 초기화
    for(i = 0; i < n; i++)  //매개 변수로 MAX_SIZE를 전달 받았으므로 0부터 MAX_SIEZ-1까지 반복
        tempsum += list[i]; //list[0]부터 list[MAX_SIZE]까지 순서대로 더한다.
    return tempsum; //배열 input에서 input[0]부터 input[MAX_SIZE]까지 순서대로 더하면 0+1+2+...+98+99이다. 이 결과 값을 반환
}
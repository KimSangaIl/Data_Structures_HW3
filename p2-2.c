#include <stdio.h>

void print1 (int *ptr, int rows);   //int형 포인터 변수 ptr과 int형 변수를 매개 변수로 갖는 print1 함수 선언

int main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    int one[] = {0, 1, 2, 3, 4};    //int형 배열을 선언 및 초기화

    printf("one     = %p\n", one);      //one의 값인 one[0]의 주소 값을 출력
    printf("&one    = %p\n", &one);     //one의 첫번째 배열인 one[0]의 주소 값을 출력
    printf("&one[0] = %p\n", &one[0]);  //one[0]의 주소 값을 출력
    printf("\n");

    print1(&one[0], 5); //one[0]의 주소 값과 5를 print1함수에 전달

    return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
    int i;  //int형 변수 i 선언
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)  //rows에 5를 전달 받았으므로 0부터 4까지 반복
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i의 값은 one[i]의 주소 값을 출력하고 *(ptr+i)의 값은 one[i]의 값을 출력
    printf("\n");
}
#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    int **x;    //int형 이중 포인터 변수 x선언

    printf("sizeof(x) = %lu\n", sizeof(x));     //변수 x는 int형이기 때문에 변수 x의 크기는 4바이트이다. 
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //포인터는 주소를 저장하므로 포인터 변수의 크기는 4바이트이다.
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //이중 포인터도 포인터와 마찬가지로 주소를 저장하기 때문에 이중 포인터 변수의 크기도 4바이트이다.
}
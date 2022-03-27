#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    int list[5];    //5개의 int형 값을 가지는 배열 선언
    int *plist[5];  //5개의 int형 포인터 배열 선언

    list[0] = 10;   //list배열의 첫번째 값을 10으로 초기화
    list[1] = 11;   //list배열의 두번째 값을 11로 초기화

    plist[0] = (int*)malloc(sizeof(int));   //plist 첫번째 배열에 int형 포인터 타입의 동적 메모리를 int형 크기만큼 할당

    printf("list[0] \t= %d\n", list[0]);             //list배열의 첫번째 값인 10을 출력
    printf("address of list \t= %p\n", list);        //list 값은 배열의 첫번째 값의 주소 값과 같으므로 list[0]의 주소 값을 출력
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]의 주소 값을 출력
    printf("address of list + 0 \t= %p\n", list+0);  //list와 같은 값을 출력
    printf("address of list + 1 \t= %p\n", list+1);  //list[1]의 주소 값을 출력
    printf("address of list + 2 \t= %p\n", list+2);  //list[2]의 주소 값을 출력
    printf("address of list + 3 \t= %p\n", list+3);  //list[3]의 주소 값을 출력
    printf("address of list + 4 \t= %p\n", list+4);  //list[4]의 주소 값을 출력
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]의 주소 값을 출력

    free(plist[0]); //할당 받은 메모리를 해제
}
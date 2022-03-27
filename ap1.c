#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    int list[5];    //5개의 int형 값을 가지는 배열 선언
    int *plist[5] = {NULL,};    //5개의 int형 포인터 배열 선언 및 초기화

    plist[0] = (int *)malloc(sizeof(int));  //plist 첫번째 배열에 int형 포인터 타입의 동적 메모리를 int형 크기만큼 할당

    list[0] = 1;    //list 배열의 첫번째 값을 1로 초기화
    list[1] = 100;  //list 배열의 두번째 값을 100으로 초기화

    *plist[0] = 200;    //plist 배열의 첫번째 값이 가리키는 변수의 값을 200으로 초기화

    printf("value of list[0]        = %d\n", list[0]);  //list 배열의 첫번째 값인 1 출력
    printf("address of list[0]      = %p\n", &list[0]); //list 배열의 첫번째 값의 주소 값을 출력
    printf("value of list           = %p\n", list);     //list 값은 배열의 첫번째 값의 주소 값과 같으므로 list[0]의 주소 값을 출력
    printf("address of list (&list) = %p\n", &list);    //list 주소 값은 배열의 첫번째 값의 주소와 같으므로 list[0]의 주소 값을 출력

    printf("---------------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);       //list 배열의 두번째 값인 100 출력
    printf("address of list[1] = %p\n", &list[1]);      //list 배열의 두번째 값의 주소 값을 출력
    printf("value of *(list+1) = %d\n", *(list + 1));   //list+1이 가리키는 list[1]의 값을 출력
    printf("address of list+1  = %p\n", list+1);        //list+1의 주소 값은 list[1]의 주소 값과 같다

    printf("---------------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //plist 배열의 첫번째 값이 가리키는 변수의 값인 200을 출력
    printf("&plist[0]          = %p\n", &plist[0]); //plist 배열의 첫번째 값의 주소 값을 출력
    printf("&plist             = %p\n", &plist);    //plist 주소 값은 배열의 첫번째 값의 주소와 같으므로 plist[0]의 주소 값을 출력
    printf("plist              = %p\n", plist);     //plist 값은 배열의 첫번째 값의 주소 값과 같으므로 plist[0]의 주소 값을 출력
    printf("plist[0]           = %p\n", plist[0]);  //할당 받은 동적 메모리의 주소 값을 출력
    printf("plist[1]           = %p\n", plist[1]);
    printf("plist[2]           = %p\n", plist[2]);
    printf("plist[3]           = %p\n", plist[3]);  //처음에 plist배열을 초기화 할때 plist[1]에서 plist[4]까지는 초기값을 입력하지 않았으므로 0으로 초기화 되었다.
    printf("plist[4]           = %p\n", plist[4]);  //따라서 plist[1]에서 plist[4]까지 모두 0을 출력

    free(plist[0]); //할당 받은 메모리를 해제
}
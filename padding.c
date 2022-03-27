#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};  //구조체 student 정의

int main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    struct student pst; //구조체 변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //char형은 13바이트를 차지하므로 패딩 바이트가 3생긴다.
    //int형은 4바이트이므로 패딩이 생기지 않는다. short형은 2바이트를 차지하므로 패딩이 2바이트 생겨서 총 크기는 13+3+4+2+2=24바이트이다. 
    printf("size of int = %ld\n", sizeof(int)); //int형의 크기 값을 출력
    printf("size of short = %ld\n", sizeof(short)); //short형의 크기 값을 출력

    return 0;
}
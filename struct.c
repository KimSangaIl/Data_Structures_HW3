#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};  //student1이라는 구조체와 멤버 변수들을 선언

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2; //구조체를 새로운 타입인 student2로 정의

int main()
{
    printf("[----- [Kim Sangil] [2019038041] -----]\n");
    
    struct student1 st1 = {'A', 100, 'A'};  //구조체 변수 st1 선언 및 초기화

    printf("st1.lastName  = %c\n", st1.lastName);   //st1구조체의 멤버 변수 lastName의 값인 A출력
    printf("st1.studentId = %d\n", st1.studentId);  //st1구조체의 멤버 변수 studentId의 값인 100출력
    printf("st1.grade     = %c\n", st1.grade);      //st1구조체의 멤버 변수 grade의 값인 A출력

    student2 st2 = {'B', 200, 'B'};     //새롭게 정의한 student2형 변수 st2 선언 및 초기화

    printf("\nst2.lastName = %c\n", st2.lastName);  //자료형이 student2인 st2의 멤버 변수 lastName의 값인 B출력
    printf("st2.studentId  = %d\n", st2.studentId); //자료형이 student2인 st2의 멤버 변수 studentId의 값인 200출력
    printf("st2.grade      = %c\n", st2.grade);     //자료형이 student2인 st2의 멤버 변수 grade의 값인 B출력

    student2 st3;   //새롭게 정의한 student2형 변수 st3 선언 및 초기화

    st3 = st2;  //st3의 값을 st2의 값으로 초기화

    printf("\nst3.lastName = %c\n", st3.lastName);  //자료형이 student2인 st3의 멤버 변수 lastName의 값인 B출력
    printf("st3.studentId  = %d\n", st3.studentId); //자료형이 student2인 st3의 멤버 변수 studentId의 값인 200출력
    printf("st3.grade      = %c\n", st3.grade);     //자료형이 student2인 st3의 멤버 변수 grade의 값인 B출력

    /* equality test */
 //   if(st3 == st2) /* not working */  //student2 자료형인 st2와 st3의 맴버 변수에 char형 변수가 포함되어 있기 때문에 연산자 ==로는 비교할 수 없다.
 //       printf("equal\n");
 //   else
 //     printf("not equal\n");

    return 0;
}
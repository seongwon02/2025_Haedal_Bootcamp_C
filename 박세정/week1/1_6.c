#include<stdio.h>
int main(){
    int A,B;
    int c,d,e,f;
    printf("Enter A,B:");
    scanf("%d %d", &A,&B);
    c=A*(B%10);
    d=A*((B/10)%10);
    e=A*(B/100);
    f=A*B;
    printf("%d\n %d\n %d\n %d\n", &c,&d,&e,&f);
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("Input two integers \n");
    scanf("%d %d" , &a,&b);
    printf("before swap a=%d , b=%d" , a,b);
    
    a=a^b;
    b=a^b; 
    a=a^b;

    printf("\nafter swap a=%d , b=%d", a,b);
    
    return 0;
}
//Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)


#include<stdio.h>
int main()
{
    int num ,ans=0;
    printf("Enter number \n");
    scanf("%d",&num);
    ans=num/10;
    ans=ans*10;
    printf("output is %d",ans);
    return 0;


}

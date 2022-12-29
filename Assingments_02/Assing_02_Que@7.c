//Write a program to check whether the given number is even or odd using a bitwise operator.


#include<stdio.h>
int main()
{

    int num;
    printf("Enter a number to check even/odd\n");
    scanf("%d",&num);
    (num&1)?
        printf("Number is odd")
    :
        printf("Number is even");

    return 0;
}

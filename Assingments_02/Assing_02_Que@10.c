/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>

int main()
{

    int num,digit,ans;
    printf("Enter number.\n");
    scanf("%d",&num);
    printf("Enter digit to append at the last.\n");
    scanf("%d",&digit);
    ans=num*10;
    ans=ans+digit;
    printf("Output %d",ans);

    return 0 ;


}

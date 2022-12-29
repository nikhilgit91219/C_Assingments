/*    Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
         and convert it into USD.*/

#include<stdio.h>

int main()
{

    float amt;
    printf("Enter amount in INR\n");
    scanf("%f",&amt);
    printf("Amount in Dollar is %f",amt/76.23);

    return 0 ;

}

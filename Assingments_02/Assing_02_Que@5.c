//5. Write a program to input a three digit number and display the sum of the digits.

int main ()
{

    int num, sum=0;
    printf("Enter 3 digit number \n");
    scanf("%d",&num);
    while(num>0)
    {
        sum=sum+num%10;
        num/=10;
    }
    printf("Sum of digits of number is %d",sum);

    return 0 ;
}

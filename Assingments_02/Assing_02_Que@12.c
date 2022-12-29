

        /*  12. Write a program to take a three digit number from the user and rotate its digits by
                one position towards the right.   */

int main ()
{
    int n,ans=0;
    printf("Enter 3 digit number \n");
    scanf("%3d",&n);

        ans=n%10;
        n/=10;
        ans*=100;
        n+=ans;

    printf("Ans = %d",n);
     return 0;
}

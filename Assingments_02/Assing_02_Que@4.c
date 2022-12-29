//4. Write a program to swap values of two int variables without using a third variable.



int main ()
{

    int x=2, y=5,z;

    printf("Output Before swapping of number\n x = %d  y = %d",x,y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nOutput After swapping of number\n x = %d  y = %d",x,y);

}

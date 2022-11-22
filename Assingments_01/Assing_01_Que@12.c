/*Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);*/


//Ans.
//	Output = ineuron7

#include<stdio.h>
int main()
{
int x = printf("ineuron\n");   //This line will print as "ineuron"
printf("%d",x);                 //This line will print "8", because in the previous line print function will return number of character printed by it which will be initilize in x var.
return 0;
}

#include<stdio.h>
int fac(int);   //signature (look of function)
int main(int argc, char const *argv[])
{
    int n;
    printf("Input any number:");
    scanf("%d",&n);
    int r=fac(n);  //transfer the value of fac(n) or function in r but frst call the function
    printf("The factorial of number is =%d",r);
    return 0;
}
int fac(int n)
{                   //body of user defined function
    int r;
    if(n<=1)
    {
    return 1;
    }
    r = n*fac(n-1);
    return r;
}
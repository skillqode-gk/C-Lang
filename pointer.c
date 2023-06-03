// pointer -> store to address of variable
// Address oprator - &
#include<stdio.h>
int main()
{
    int a = 20, *p,**q;
    p = &a;
    q = &p;
    printf("value of A is: %d",a);
    printf("\nAddress of A: %u",&a);
    printf("\nAddress of A using p: %d",p);
    printf("\nAddress of p: %u",&p);
    printf("\nAddress of p using q: %d",q);
     printf("\nValue of A using q: %d",**q);
}

// array -> collection of same datatype, (userdefined datatype, homogenous datatype)
// index -> start with zero
// types -> one dimensional array / multi dimensional array
// int arrName[size] -> int a[10] -> a[0],a[1],a[2],....a[9]

#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++){       // data entry
        printf("Enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        printf("a[%d]: %d\n",i,a[i]);
    }
}

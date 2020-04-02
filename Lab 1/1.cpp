#include<stdio.h>
int main()
{
int i,j;
printf("Enter the number i and j");
scanf("%d%d",&i,&j);
i=i+j-(i%j);
printf("the round of integer is %d",i);
}

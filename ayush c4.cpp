// write a  c programm to find a sum of the digits of a whole number// 
#include<stdio.h>
int main()
{ 
    int n,digit=0,sum=0;
    printf("enter whole number :");
    scanf("%d", &n);
    while(n>0)
    { 
    digit=n%10;
    sum=sum+digit;
    n=n/10;
	}
	printf("\nsum of digits=%d",sum);
	return 0;
}

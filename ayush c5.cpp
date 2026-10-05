//WACP to count a digits of whole no//

#include<stdio.h>
int main()
{
	int n, count=0;
	printf("enter a number :");
	scanf("%d" ,&n);
	while(n>0)
	{
		count++;
		n/=10;
	}
	printf("\n count of digits=%d" ,count);
	return 0;
}

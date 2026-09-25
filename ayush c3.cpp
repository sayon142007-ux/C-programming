//wcp to find the sum of the folowing series 1!+!3+!5.... upto

#include <stdio.h>
int main()
{
	int i=1, c=1,a=1,n;
	long int fact,sum=0;
	printf("enter the no of terms:");
	scanf("%d", &n);
	
	while(c<=n)
	{
		i=1;
		fact=1;
		while(i<=a){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;
	}
	printf("sum of the numberd=%d",sum);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	


/*wcp which accepts on integer number and prints multiplication of digits*/

#include <stdio.h>
int main()
{
	int num, product=1,old_num;
	printf("enter any number:");
	scanf("%d", &num);
	old_num=num;
	while(num>0)
	{
		product=product*num%10;
		num=num/10;
	}
	printf("multi. of the digit %d is %d", old_num,product);
	return 0;
}    
     

//wacp to take inputs from the user and display the screen as an array
#include<stdio.h>
int main()
{
	int i,n;
	printf("enetr the size of an array\n");
	scanf("%d" ,&n);
	int arr[n];
	printf("enetr array eliment \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);}
		printf("\n input element are ... \n");
		for(i=0;i<n;i++){
		printf("%d \n",arr[i]);}
}



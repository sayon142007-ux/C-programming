#include<stdio.h>
int main()
{
    int i, j, k;
    
    for(i = 0; i <= 4; i++)
    {
        for(j = 0; j <= 4 - i; j++){
            printf(" ");
        }
        for(j = 4; j >= 4 - i; j--){
            printf("%d", j);
       }
       for(k=5-1;k<=4;k++){
       	if(i!=0){
       		printf("%d",k);
		   }        
	}	   printf("\n");
        
    }
    return 0;
}
	


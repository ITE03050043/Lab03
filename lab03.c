#include<stdio.h>
int main(void)
{
	int a[10],j;
	printf("Please enter ten numbers and separate from each numbers:");
	
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
      	printf("Numbers you enter:\n");
	
	for(j=0;j<10;j++)
	{
		printf("%d\n",a[j]);
	}
	
	return 0;
}

#include<stdio.h>
void main()
{
	int a[4][4],i,j;
	for(i=0;i<4;i++)
	{
		printf("Enter subjects of students of rollno:%d\n",i+1);
		for(j=1;j<4;j++)
		{
			scanf("%d\n",a[i][j]);	
	}
}

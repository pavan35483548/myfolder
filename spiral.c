#include<stdio.h>
void main()
{
	int r,c,d;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	int i=0,j=0,k=0;
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&arr[i][j]);
	printf("matrix %d x %d\n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
int l;
if(r<c)
{
	l=r-1;
}
else
l=r;
for(k=0;k<l-1;k++)
{
	for(i=k,j=k;j<c;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	for(j--,i++;i<r;i++)
		printf("%d ",arr[i][j]);
		printf("\n");
	for(i--,j--;j>=k;j--)
		printf("%d ",arr[i][j]);
		printf("\n");
	for(i--,j++;i>k;i--)
		printf("%d ",arr[i][j]);
	r--,c--;
		printf("\n");
}
}

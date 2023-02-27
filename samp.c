#include<stdio.h>
#include<string.h>
void main()
{
	char src[20];
	scanf("%[^\n]s",src);
	int i,j,count=0,l;
		l=strlen(src);
	for(i=0;src[i]!='\0';i++)
	{
		for(j=i+1;src[j]!='\0';j++)
		{
			if(src[i]==src[j])
			{
				count++;
				memmove(&src[j],&src[j+1],l-i);
				j--;
			}
		}
		
		if(count>0)
		{
			strcpy(&src[i],&src[i+1]);
			count=0;
			i--;
		}
	}
	printf("%s\n",src);
}

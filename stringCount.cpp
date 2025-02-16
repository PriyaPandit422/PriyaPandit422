#include<stdio.h>
#include<conio.h>
void main()
{
	char str[20]="what is your name";
	char str1[20];
	printf("Enter the sentence:");
	for(int i=0;i<sizeof(str);i++)
	{
		int count=0;
		for(int j=0;j<sizeof(str);i++)
		{
			if(str[i]==str[j])
				count+=1;
		}

	}
	getch();
}
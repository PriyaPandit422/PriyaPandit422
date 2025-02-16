#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
void main()
{
	int res=fibo(5);
	printf("%d",res);
	getch();
}
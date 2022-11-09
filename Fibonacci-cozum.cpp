#include<stdio.h>
#include<conio.h>

int a=0,b=1,c,i,n,t,e;

main()
{
	printf("Fibonacci sayi sistemine hos geldiniz.\n");
	printf("Kac basamakli sayilari istiyorsunuz: ");
	scanf("%d", &n);
	if(n==1)
	{
		printf("%d basamakli fibonacci sayilari= 0, 1, ",n);
	}
	else
	{
		printf("%d basamakli fibonacci sayilari= ",n);
	}
x:	c=a+b;
	e=c;
	a=b;
	b=c;
	i=0;
	
	while(c>0)
	{	
		t=c%10;
		c=(c-t)/10;
		i++;
	}

	if(i==n)
	{
		c=e;
		printf("%d, ",c);
		goto x;
	}
	else if(i<n)
	{
		goto x;
	}
}

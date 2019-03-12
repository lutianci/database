#include<stdio.h>
void main()
{
	int X,Y,Z;
	int n=0;
	printf("请输入三个数X,Y,Z的值")；
	scanf("X=%d,Y=%d,Z=%d",&X,&Y,&Y);
	if(X<Y)
		n=X;
	    X=Y;
		Y=n;
	if(X<Z)
		n=X;
	    X=Z;
		Z=n;
	if(y<z)
		n=Y;
	    Y=Z;
		Z=n;
	printf("%d,%d,%d",X,Y,Z);
}	

#include<stdio.h>
void main()
{
	int x,n;
	printf("请输入x，n的值");
	scanf("x=%d,n=%d",&x,&n);
	int a[n+1],i;
	for(i=0;i<n+1;i++)
		scanf("%d",&a[i]);//执行n+1次
	int p=a[n];
	for(i=n;i>0;i--)
		p=a[i-1]+x*p;//执行n+1次
	printf(p=%d",p);
}
//时间复杂度为O（n）
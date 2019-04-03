#include<stdio.h>
#define N 10
typedef struct SqList
{
	char elem[N];
	int top;
} *SqList;
int PushList(SqList S,int n)
{
	int i;
	SqList Sq;
	Sq->top=-1;
	for(i=0;i<n;i++)
	{
		if(S->elem[i]=='{'||S->elem[i]=='}'||S->elem[i]=='['||S->elem[i]==']'||S->elem[i]=='('||S->elem[i]==')')
		{
			if(Sq->top>=0&&Sq->elem[Sq->top]+2==S->elem[i]||Sq->elem[Sq->top]+1==S->elem[i])
			{
				PoP(Sq);
				Sq->top--;
			}
			else
			{
				Sq->top++;
				Sq->elem[Sq->top]=S->elem[i];
			}
		}
	}
	return (top);
}

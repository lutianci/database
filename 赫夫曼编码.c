#include<stdio.h>
#include<string.h>
#define N 27
typedef struct{
   unsigned int weight;
   unsigned int parent,lchild,rchild;
};HTNode,*HuffmanTree;
typedef char **HuffmanCode;
void HuffmanCoding(HuffmanTree &HT,HuffmanCode &HC,int *w,int n)
{
    if(n<=1)return;
    m=2*n-1;
    HT=(HuffmanTree)malloc((m+1)*sizeof(HTNode));
    HTNode *p;
    for(p=HT+1,i=1;i<=n;++i,++p,++w) *p={*w,0,0,0};
    for( ;i<=m;++i,++p) *p={0,0,0,0};
    for(i=n+1;i<=m;++i){
        Select(HT,s1,s2);
        HT[s1].parent=i;
        HT[s2].parent=i;
        HT[i].lchild=s1;
        HT[i].rchild=s2;
        HT[i].weight=HT[s1].weight+HT[s2].weight;
    }
    HC=(HuffmanCode)malloc((n+1)*sizeof(char*));
    cd=(char*)malloc(n*sizeof(char));
    cd[n-1]="\0";
    for(i-1;i<=n;++i){
        start=n-1;
        for(c=i,f=HT[i].parent;f!=0;c=f,f=HT[f].parent){
            if(HT[f].lchild==c) cd[--start]="0";
            else cd[--start]="1";
        }
        HC[i]=(char*)malloc((n-start)*sizeof(char));
        strcpy(HC[i],&cd[start]);
    }
    free(cd);
}
void Select(HuffmanTree &HT,int a,int b)
{
    int t1,t2,a,b,i;
    int q[27];
    for(i=0;i<N;i++){
        q[i]=HT[i].weight;
    }
    t1=t2=q[0];
    a=b=0;
    for(i=0;i<N-1;i++){
        if(t1>q[i]){
            t1=q[i];
            a=i;
        }
    }
    q[a]=200;
    for(i=0;i<N-1;i++){
        if(t2>q[i]){
            t2=q[i];
            b=i;
        }
    }
    q[b]=200;
}
void main()
{
    struct *HT;
    int *w,i,J;
    int a[27]={186,64,13,22,32,103,21,15,47,57,1,5,32,20,57,63,15,1,48,51,80,23,8,18,1,16,1};
    w=(int)malloc((N)*sizeof(w));
    for(i=0;i<N;i++){
        w=a[i];
        ++w;
    }
    HuffmanCoding(HT,HC,w,N);
    char s[27]={ ABCDEFGHIJKLMNOPQRSTUVWXYZ};
    char s1[27]={THIS PROGRAM IS MY FAVORITE};
    for(i=0;i<27;i++){
        for(j=0;j<27;j++){
            if(s1[i]==s[j]) printf("%d\n",HC[j]);
        }
    }
}

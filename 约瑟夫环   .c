#include <stdio.h>
#include <stdlib.h>
 typedef struct Node{
     int Num;
     int Mima;
     struct Node *next;
 }Node;
 int main()
 {
     int i,j,N,k;
     struct Node *pa,*pb,*head;
     head=(struct Node*)malloc(sizeof(Node));
     pa=head;
     printf("�������������:");
     scanf("%d",&N);
     printf("�������ʼ����:");
     scanf("%d",&k);
     for(i=1;i<N+1;i++)
     {
         pa->next=(struct Node*)malloc(sizeof(Node));
         pa=pa->next;
         printf("�������%d������:",i);
         scanf("%d",&pa->Mima);
         pa->Num=i;
     }
     pa->next=head->next;
    pa=head->next;
    free(head);
    for(j=0;j<N;j++)
    {
        for(i=1;i<k;i++)
        {
            pb=pa;
            pa=pa->next;
        }
        printf("�����˱���Ϊ%d\n",pa->Num);
        k=pa->Mima;
        pb->next=pa->next;
        free(pa);
        pa=pb->next;
    }
 }


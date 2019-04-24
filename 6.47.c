typedef BiTree QElemType;
Status LevelOrderTraverse(BiTree& T,Status(*Visit)(TElemType e))
{
    QElemType p;
    Queue q;
    InitQueue(q);
    if(T)EnQueue(q,T);
    while(!QueueEmpty(q)){
        DeQueue(q,p);
        Visit(p->data);
        if(p->lchild)EnQueue(q,p->lchild);
        if(p->rchild)EnQueue(q,p->rchild);
    }
    return OK;
}

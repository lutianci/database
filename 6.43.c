Status ExchangeBiTree(BiTree& T)
{
    BiTree p;
    if(T){
        p=T->lchild;
        T->lchild=T->rchild;
        T->rchild=p;
        ExchangeBiTree(T->lchild);
        ExchangeBiTree(T->rchild);
    }
    return OK;
}

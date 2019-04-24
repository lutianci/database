Status CompleteBiTree(BiTree& T)
{
	int d;
	if(T){
		d=BiTDepth(T->lchild)-BiTDepth(T->rchild);
		if(d<0||d>1)return ERROR;
		else{
			if(CompleteBiTree(T->lchild)&&CompleteBiTree(T->rchild)) return OK;
			else return ERROR;
		}
	}
	else return OK;
}

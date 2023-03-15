
#include<stdio.h>
#include<stdlib.h>
struct node
{	int data;
struct node * left;
struct node * right;
}*root=NULL,*t1;
int ele,c,bal;
struct node *  insert(struct node *,struct node *);
void inorder(struct node *);
struct node * right_rot(struct node *);
struct node * left_rot(struct node *);
int findbf(struct node *);
int height(struct node *);
main()
{
while(1)
{

printf("\n");
printf("1 for insert\n");
printf("2 for display inorder\n");
printf("3 for height \n");
printf("4 for exit\n");
printf("enter above choice..:\n");
scanf("%d",&c);
switch(c)
{
case 1 : printf("\n  enter the element\n");
scanf("%d",&ele);
t1=(struct node *)malloc(sizeof(struct node));
t1->data=ele;
t1->left=NULL;
t1->right=NULL;
root=insert(root,t1);
printf("now the root is %d",root->data);
break;
case 2 : printf("display...\n");
inorder(root);
break;
case 3 : printf("%d",findbf(root));
break;
case 4 : exit(1);
default: printf("invalid choice\n");

}

}

}

struct node * insert(struct node * r, struct node *t)
{
if(r==NULL)
{ r=t;
return r;
}
else if(t->data < r->data)
r->left=insert(r->left,t);
else if(ele > r->data)
r->right=insert(r->right,t);
else
printf("Duplicate ..\n");
bal=findbf(r);
if(bal>1 || bal<-1)
{
printf("...rotation-----:\n");
if(bal>1 && t->data < r->left->data)
{
// r->h=height(r);
return right_rot(r);
}
if(bal < -1  && t->data > r->right->data)
{
//r->h=height(r);
return left_rot(r);
}
if(bal > 1 && t->data > r->left->data)
{
r->left=left_rot(r->left);
//r->h=height(r);
return right_rot(r);
}
if(bal < -1 && t->data <  r->right->data)
{
r->right=right_rot(r->right);
//r->h=height(r);
return left_rot(r);
}
}
return r;

}

int findbf(struct node *r)
{
if(r==NULL)
return 0;
else
{

return (height(r->left) -  height(r->right));
}
}

int height(struct node *r)
{
int lh,rh;
if (r==NULL)
return -1;
else
{
lh=1+height(r->left);
rh=1+height(r->right);

if(lh>rh)
{
return lh;
}
else
{
return rh;
}
}

}

struct node *  right_rot(struct node * y)
{
struct node *x=y->left;
struct node *t2=x->right;
x->right=y;
y->left=t2;
return x;
}


struct node *  left_rot(struct node * x)
{
struct node *y=x->right;
struct node *t2=y->left;
y->left=x;
x->right=t2;
return y;
}




void inorder(struct node * r)
{
if(r!=NULL)
{
inorder(r->left);
printf(" %d (%d) ",r->data,height(r));
inorder(r->right);
}

}

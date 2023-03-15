#include<stdio.h>
#include<stdlib.h>
struct n
{
int data;
struct n * left;
struct n * right;

}*root=NULL,*t,*t1,*t2;
int ele,c,key;
void insert(struct n *);
void inorder(struct n *);
struct n *  delete_node(struct n *,int);
struct n * minvalue(struct n *);
void main()
{

while(1)
{
printf("\n1 : for insert\n");
printf("2 : for indoder TRaversal\n");
printf("3 : for deleting a node\n");
printf("4 : exit\n");
printf("\nenter the choice\n");
scanf("%d",&c);
switch(c)
{
case 1 : printf("\n enter the element / data to insert");
scanf("%d",&ele);
t=(struct n *)malloc(sizeof(struct n));
t->data=ele;
t->left=NULL;
t->right=NULL;
insert(root);
break;
case 2 : inorder(root);
break;
case 3 : printf("enter the element to delete\n");
scanf("%d",&key);
root=delete_node(root,key);
break;
case 4 : exit(1);
default : printf("\ninvalid choice\n");
}

}

}

struct n * delete_node(struct n * r,int key)
{
if(root==NULL)
{
return NULL;
}
if(key<r->data)
r->left=delete_node(r->left,key);
else if(key > r->data)
r->right=delete_node(r->right,key);
else
{
if(r->left==NULL)
{
t2=r->right;
free(r);
return t2;
}

else if(r->right==NULL)
{
t2=r->left;
free(r);
return t2;
}
else
{

t=minvalue(r->right);
r->data=t->data;
r->right=delete_node(r->right,t->data);

}
}


}

struct n*   minvalue(struct n * temp)
{
struct n *c=temp;
while(c && c->left!=NULL)
c=c->left;
return c;
}




void insert(struct n * r)
{

if(root==NULL)
root=t;

else
{

if(ele < r->data)
{

if(r->left!=NULL)
insert(r->left);
else
r->left=t;
}
else
{

if(r->right!=NULL)
insert(r->right);
else
r->right=t;
}


}


}


void inorder(struct n* r)
{
if(root==NULL)
printf("empty");
if(r!=NULL)
{
inorder(r->left);
printf("  %d  ",r->data);
inorder(r->right);

}

}

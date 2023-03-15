#include <stdio.h>
int heap[10];
void swap(int,int);
void main()
{
int  no, i, j, c,p;
printf("\n Enter no of elements for heap :");
scanf("%d", &no);
printf("\n Enter the nos of elements for heap : ");
for (i = 0; i< no; i++)
scanf("%d", &heap[i]);
for (i = 1; i< no; i++)
{
c = i;
do
{
p = (c - 1) / 2;
if (heap[p] < heap[c])   // to create MAX heap array 
swap(p,c);
c = p;
} while (c != 0);
}
printf(" MAx   Heap   array : ");
for (i = 0; i< no; i++)
printf("%d\t ", heap[i]);
for (j = no - 1; j >= 0; j--)
{
swap(0,j);
p = 0;
do
{
c = 2 * p + 1;   // left node of parent element 
if ((heap[c] <heap[c + 1]) && c < j-1)
c++;
if (heap[p]<heap[c] && c<j)    /* again rearrange to max heap array */
swap(p,c);
p = c;
} while (c < j);
}
printf("\n The sorted array is : ");
for (i = 0; i< no; i++)
printf("\t %d", heap[i]);
}
// swap function
void swap(int p,int c)
{
int t;
t=heap[p];
heap[p]=heap[c];
heap[c]=t;
}

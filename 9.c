#include<stdio.h>
#include<time.h>
void selsort(int a[],int n)
{
int i,j,small,pos,temp; 
for(i=0;i<n-1;i++)
{
small=a[i];
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<small)
{
small=a[j];
pos=j;
}
}
temp=a[i];
a[i]=small;
a[pos]=temp;
}
}
void main()
{
int a[50000],i,n;
clock_t start,end;
float dura;
clrscr();
printf("\nEnter the n value:");
scanf("%d",&n);
printf("\nEnter the array:");
for(i=0;i<n;i++)
 {
 a[i]=rand( )%10000;
 printf("%d",&a[i]);
 }
start=clock();
selsort(a,n);
end=clock();
dura=(end-start)/CLOCKS_PER_SEC;
printf("\nTime taken is:%f",dura);
printf("\nSorted array is:"); for(i=0;i<n;i++)
printf("%d ",a[i]);
}

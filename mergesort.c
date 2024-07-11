#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fnMerge(int a[], int low,int mid,int high) {
int i,k,j,b[500000];
i=k=low;
j=mid+1;
while(i<=mid && j<=high) {
if(a[i]<a[j])
b[k++]=a[i++];
else
b[k++]=a[j++];
}
while(i<=mid)
b[k++]=a[i++];
while(j<=high)
b[k++]=a[j++];
for(i=low;i<k;i++)
 a[i]=b[i];
}
void fnMergeSort(int a[],int low,int high) {
int mid;
if(low<high) {
mid=(low+high)/2;
fnMergeSort(a,low,mid);
fnMergeSort(a,mid+1,high);
fnMerge(a,low,mid,high);
}
}
void main( ) {
 
int 
i,n,a[500000];
 clock_t start,end;
 float dura; printf(“enter the size of the array”); scanf(“%d”,&n); printf(“enter the array elements”);
for(i=0;i<n;i++)
{
 a[i]=rand()%10000;
 printf(“%d\t”,a[i]);
}
start=clock();
fnMergeSort (a,0,n-1);
end=clock();
dura=(end-start)/CLK_TCK;
printf("\nTime taken is:%f",dura);
printf(”the sorted elements are”);
for(i=0;i<n;i++)
printf(“%d\t”,a[i]);
}
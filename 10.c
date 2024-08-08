# include< stdio.h>
 # include < conio.h>
 # include <time.h>
 
 int partition( int a[], int low, int high)
 
{
 int i, j, temp, key ;
 key = a[low];
 i= low+1;
 j= high;
 while(1)
 
{
 while ( i< high && key >=a[i] )
 i++;
 while ( key < a[j] )
 
j--
;
 if (i<j)
 
{
 temp = a[i];
 a[i]= a[j];
 a[j]=temp;
 
}
 else
 
{
 temp = a[low];
 a[low]= a[j];
 a[j]=temp;
 return j;
 
}
 
}
 
}
 void quick( int a[], int low, int high)
 
{
 int j;
 if( low< high)
 
{
 j=partition (a,low,high);
 quick (a,low,j
-1);
 quick (a,j+1, high);
 
}
 
}
void main( )
 {
 int n, i, a[50000] ;
 clock_t start, end;
 clrscr ( );
 printf( “ Enter the array size \n”);
 scanf(“%d”, &n);
 printf( “system inputs %d elements \n”,n);
 for (i=0; i<n; i++)
 {
 a[i]=rand( )%1000; 
 printf ( “%d\t ”, a[i] );
 }
 start = clock ( );
 quick( a, 0, n-1 );
 end =clock ( );
 printf( “ The sorted array is \n”);
 for (i=0; i< n; i++)
 printf ( “ %d\n”, a[i] );
 printf (“ Time taken to sort is %f seconds \n”, ( end- start) / CLK_TCK );
 getch( );
 }

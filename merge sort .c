//a c program to implement merge sort

#include <stdio.h>
#include <stdlib.h>

void mergesort(float a[],int x,int y);
void merge(float a[],int x1,int y1,int x2,int y2);

int main()
{
   int n,x;
   float a[100];

   printf("enter the number of elements u wish to sort: ");
   scanf("%d",&n);

   printf("enter array elements to sort\n");


   for( x=0;x<n;x++)

     {

       printf("a[%d]:",x);
       scanf("%f",&a[x]);
     }

    mergesort(a,0,n-1);

   printf("the sorted array of the elements is\n");

    for(x=0;x<n;x++)

     {
        printf("\na[%d]:",x);
        printf("%.2f",a[x]);
     }

    return 0;
}

   void mergesort(float a[],int x,int y)
{
    int mid;

    if(x<y)
    {
        mid=(x+y)/2;
        mergesort(a,x,mid);//left recursion
        mergesort(a,mid+1,y);//right recursion
       //merging of two sub arrays
        merge(a,x,mid,mid+1,y);
    }

}

void merge(float a[],int x1,int y1,int x2,int y2)
{
    float temp[50];
    int x,y,z;
    x=x1;
    y=x2;
    z=0;
    while(x<=y1&&y<=y2)
    {
        if(a[x]<a[y])
         temp[z++]=a[x++];

         else
         temp[z++]=a[y++];

    }

    while(x<=y1)
        temp[z++]=a[x++];

    while(y<=y2)
        temp[z++]=a[y++];

      for(x=x1,y=0;x<=y2;x++,y++)

        a[x]=temp[y];
}


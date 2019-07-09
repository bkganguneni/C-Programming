//a c program to implement quick sort

#include <stdio.h>
#include <stdlib.h>

void quicksort(float a[30],int first,int last);
int main()
{
    int x,n;
    float a[30];

    //prints the number of elements by allowing us to give the entries
    printf("number of elements u wish to enter :");
    scanf("%d",&n);

    printf("enter %d elements in the array:\n",n);

    for(x=0;x<n;x++)
    {
    printf("a[%d]:",x);
    scanf("%f",&a[x]);
    }

    quicksort(a,0,n-1);

    printf("the list of sorted elements is:");

    for(x=0;x<n;x++)
    {
        printf("\na[%d] :",x);
        printf("%.2f",a[x]);
    }

    return 0;
}

  void quicksort(float a[30],int first,int last)
  {
      int x,y,pivot ;
      float temp;

      if(first<last)
      {  //let us assume pivot to be the first element
          pivot = first;
          x=first ;
          y=last ;

    while(x<y)
    {
        while(a[x]<=a[pivot]&&x<last)
            x++;

        while(a[y]>a[pivot])
            y--;

        if(x<y)
        {
            //swapping technique
            temp=a[x];
            a[x]=a[y];
            a[y]=temp;
        }

    }

       temp=a[pivot];
       a[pivot]=a[y];
       a[y]=temp;
       quicksort(a,first,y-1);
       quicksort(a,y+1,last) ;

      }
  }

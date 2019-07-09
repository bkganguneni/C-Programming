#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j ;
    float array[100],swap ;
//stores the value we give to the array
    printf("enter the number of elements u wish to have :");
    scanf("%d",&x);

    printf("enter any elements of your choice in array :\n");
// while loop initiation
    i=0 ;
    while(i<x)
    {
        printf("array[%d]:",i);
        scanf("%f",&array[i]);
        i++ ;
    }

    for(y=1;y<x;y++)
    {
       j = y ;

       while((array[j]<array[j-1])&&(j>0))
       {
            swap = array[j];
           array[j]=array[j-1];
           array[j-1] = swap ;
           j-- ;
       }

    }

    printf("the elements after sorting takes place are :\n");

    i=0 ;
    while(i<x)
    {
        printf("array[%d] :",i);
        printf("%.2f\n",array[i]);
        i++ ;
    }
    return 0;
}

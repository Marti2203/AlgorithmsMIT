#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) do{(x)^=(y); (y)^=(x); (x)^=(y);}while(0);
#define min(x,y) ( (x) > (y) ? (y) : (x) )
#define max(x,y) ( (x) > (y) ? (x) : (y) )
#define and &&
#define printArr(arr,start,size) for(int i=0;i<size;i++)printf("%i ",arr[i]); printf("\n");
#define printInt(a) printf("%i\n",a);
int* reversed(int *arr,int size)
{
    int *reversed=calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    reversed[i]=arr[size-i-1];
    return reversed;
}
int identity(int a){return a;}

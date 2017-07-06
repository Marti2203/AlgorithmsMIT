#include "base.h"

int* addbin(int *a,int aSize,int *b,int bSize)
{
    int 
    carry=0,    
    minSize=min(bSize,aSize),
    maxSize=max(bSize,aSize),
    *maxArr=(aSize > bSize? a: b),
    *c=calloc(maxSize+1,sizeof(int)),
    aCurr=aSize-1,
    bCurr=bSize-1,
    cCurr=maxSize;

    for(;aCurr!=-1 && bCurr!=-1 ;aCurr--,bCurr--,cCurr--)
    {
        c[cCurr]=a[aCurr]^b[bCurr]^carry;
        carry=(a[aCurr] & b[bCurr] ) | ( carry & b[bCurr] ) | (carry & a[aCurr]);
    }
    
    if(aSize!=bSize)
    {
        for(int i=maxSize-minSize-1;i!=-1;i--)
        {
            c[i+1]=maxArr[i]^carry;
            carry=maxArr[i]&carry;
        }
            
            c[0]=carry;
    }
    return c;
}

void binarize(int* arr,int size)
{
    for(int i=0;i<size;i++) arr[i]=arr[i]&1;
}

int main()
{
    #define ASize 14
    int a[ASize];
    binarize(a,ASize);
    
    int b[10];
    binarize(b,10);

    printf("1: 0 ");printArr(a,0,ASize)
    printf("2: 0 0 0 0 0 ");printArr(b,0,10)

    int* c=addbin(a,ASize,b,10);

    printf("3: ");printArr(c,0,ASize+1)
}
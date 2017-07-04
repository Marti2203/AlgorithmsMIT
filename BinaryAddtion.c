#include "base.h"

int* addbin(int* a,int aSize,int *b,int bSize)
{
    int 
    cSize=( aSize > bSize ? aSize : bSize) + 1,
    *c=calloc(cSize,sizeof(int)),
    carry=0,
    i=0,
    minSize=(aSize> bSize? bSize: aSize)-1,
    *maxArr=( aSize> bSize? a:b);

    while(i!=minSize)
    {
        c[i]=a[aSize-1-i]^b[bSize-1-i]^carry;
        carry=a[aSize-1-i] & b[bSize-1-i];
        i++;
    }
    c[minSize]=maxArr[minSize]^carry;
    c[minSize+1]=maxArr[minSize]&carry;

    return c;
}
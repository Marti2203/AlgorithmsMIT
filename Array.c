#include <limits.h>
#include "base.h"
typedef struct 
{
    unsigned int length,elementSize; 
    long *data;
} Array;

#define Mask(i) (1<<i)-1
int rounde()
{
    int a= WORD_BIT;
    return a;
}
Array create(int length,int elementSize)
{
    Array array;
 array.length=length;
 array.elementSize=elementSize;
 array.data=malloc(2);
 return array;
}

void getElement(int position,int size)
{

}



int main()
{
    printf("%d",WORD_BIT);
}
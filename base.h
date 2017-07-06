#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(x,y) do{ if((x)!=(y)){(x)^=(y); (y)^=(x); (x)^=(y);} }while(0);
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

#define Size 10
int* getTestArr(){
    int* testArr=malloc(Size*sizeof(int));
    testArr[0]=6;
    testArr[1]=8;
    testArr[2]=3;
    testArr[3]=19;
    testArr[4]=100;
    testArr[5]=84;
    testArr[6]=222;
    testArr[7]=11;
    testArr[8]=60;
    testArr[9]=333;
    
    return testArr;
}

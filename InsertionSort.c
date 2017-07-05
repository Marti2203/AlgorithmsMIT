#include "base.h"
#define Size 10
void InsertionSort(int* arr,int size, int (*compare)(int,int))
{
    for(int j=1;j<size;j++)
    {
        int key=arr[j],i=j-1;
        while(i>-1 and compare(arr[i],key))
            {
                arr[i+1]=arr[i]; 
                i--;
            }

        arr[i+1]=key;
    }
}

int descending(int a,int b){return a<b;}
int ascending(int a,int b){return a>b;}

//#define printArr(arr,size) printArr(arr,0,size)

int main()
{
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
    //printArr(testArr,0,Size)

    InsertionSort(testArr,Size,ascending);
    printArr(testArr,0,Size)
    return 0;
}
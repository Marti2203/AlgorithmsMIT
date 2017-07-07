#include "base.h"
void InsertionSort(int* arr,int size, comparerDefintion)
{
    for(int j=1;j<size;j++)
    {
        int key=arr[j],i=j-1;
        while(i>-1 and comparerFunc(arr[i],key))
            {
                arr[i+1]=arr[i]; 
                i--;
            }

        arr[i+1]=key;
    }
}


//#define printArr(arr,size) printArr(arr,0,size)

int main()
{
    int* testArr=getTestArr();
    printArr(testArr,0,Size)
    InsertionSort(testArr,Size,ascending);
    printArr(testArr,0,Size)
    return 0;
}
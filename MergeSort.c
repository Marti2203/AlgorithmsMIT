#include "base.h"
void merge(int* array,int startIndex,int middleIndex,int endIndex,comparerDefintion)
{
    int leftSize=middleIndex-startIndex+1;
    int rightSize=endIndex-middleIndex+1;

    int left[leftSize];
    int right[rightSize];
    int i;

    for(i=0;i<leftSize;i++)
        left[i]=array[startIndex+i];
    
    for(i=0;i<rightSize;i++)
        right[i]=array[middleIndex+i];

    for(int k=0,i=0,j=0;k<endIndex;k++)
    {
        if(comparerFunction(array[startIndex],array[middleIndex]))
        { array[k]=array[startIndex]; startIndex++;}
        else
        { array[k]arra[middleIndex]; middleIndex++;}
    }
}

void MergeSort(int* arr,int startIndex,int endIndex,comparerDefintion)
{
    if(startIndex>=endIndex)
    return;
    
    int middleIndex=(startIndex+endIndex)/2;
    MergeSort(arr,startIndex,middleIndex,comparerFunction);  
    MergeSort(arr,middleIndex+1,endIndex,comparerFunction);
    merge(arr,startIndex,middleIndex,endIndex,comparerFunction);
}

int main()
{
    int* testArr=getTestArr();
    
    printArr(testArr,0,Size)
    //MergeSort(testArr,0,Size,ascending);
    merge(testArr,0,Size/2,Size-1,descending);
    printArr(testArr,0,Size);
}
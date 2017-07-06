#include "base.h"
void merge(int* array,int startIndex,int middleIndex,int endIndex)
{
    for(int i=startIndex,j=middleIndex,k=startIndex;k<endIndex;k++)
    {
        if(array[i]<=array[j])
        { swap(array[i],array[k]) i++;}
        else
        { swap(array[j],array[k]) j++;}
    }
}

void MergeSort(int* arr,int p,int r)
{
    if(p>=r)
    return;
    
    int q=(p+r)/2;
    MergeSort(arr,p,q);  
    MergeSort(arr,q+1,r);
    merge(arr,p,q,r);
}

int main()
{
    int* testArr=getTestArr();

    printArr(testArr,0,Size)
    MergeSort(testArr,0,Size);
    printArr(testArr,0,Size);
}
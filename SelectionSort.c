#include "base.h"
void SelectionSort(int *arr,int size,comparerDefintion)
{
    for(int currPos=0;currPos<size-1;currPos++)
    {
        int best=currPos;

        for(int i=currPos+1;i<size;i++)
        if(comparerFunc(arr[i],arr[best]))
           best=i;

        swap(arr[currPos],arr[best])
    }

}
int main()
{
    int* arr=getTestArr();
    printArr(arr,0,Size)
    SelectionSort(arr,Size,ascending);
    printArr(arr,0,Size)

}
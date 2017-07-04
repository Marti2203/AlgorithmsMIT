#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) do{(x)^=(y); (y)^=(x); (x)^=(y);}while(0);
#define and &&
#define printArr(arr,start,size) for(int i=0;i<size;i++)printf("%i ",testArr[i]); printf("\n");
#define printInt(a) printf("%i\n",a);
#define Size 10
int identity(int a){return a;}

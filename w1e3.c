#include <stdbool.h>
#include <stdio.h>
#define PIVOT 6     //ez finding & editing

int findarray(int array[], int Size);
int main(int argc, char **argv)
{
    int array[] = {3,6,10,4,8,12,5};
    printf("This system is going to look for %d ",PIVOT);
    int Size = sizeof(array) / sizeof(int);
    int boi = findarray(array,Size);
    if(boi)
        printf("Given value is in array at index %d", boi);
    else
        printf("Given value is not in array");
}

int findarray(int array[], int Size)
{
    int i=0;
    printf("\nSize of array is %d The value is %d\n\n", Size,PIVOT);
    for(i;i<Size;i++) {
        if(array[i]==PIVOT)
            return i;
    }
    return 0;
}

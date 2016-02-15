#include <stdio.h>
#define SIZE 6     //int Size = sizeof(array) / sizeof(int); pointer decay N stuff
int main(int argc, char **argv)
{
    int i=0;
    int array[]={2,5,6,7,8,5};
    int copy[SIZE]={};
    printf("Original Array: ");
    for(i;i<SIZE;i++) {
        printf("%d\t",array[i]);
        copy[(SIZE-i)-1]=array[i];
    }
    printf("\nFlipped Array: ");
    for(i=0;i<SIZE;i++)
        printf("%d\t",copy[i]);
}

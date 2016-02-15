#include <stdbool.h>
#include <stdio.h>
#define SIZE 6     //int Size = sizeof(array) / sizeof(int); pointer decay N stuff

int bigboi();
void showarray(int array[]);
int main(int argc, char **argv)
{
    int array[]={2,5,6,7,8,5};
    bool boi = bigboi();
    if(boi) {
        printf("Array is bigger than 2\n");
        showarray(array);
    } else
        printf("not big enough");
    return 0;
}

int bigboi()
{
    if(SIZE>2)
        return 1;
    else
        return 0;
}

void showarray(int array[])
{
 int i,x,y,z;
 int urruy[3]={0,0,0};
 for(x=0;x<SIZE;x++) {
    y=(SIZE-1);
    z=(SIZE+1);
    //decide swap spaces
    for(i=0;i<SIZE;i++)
        if(array[x]>=urruy[y-i])
            z=(y-i);
    //schuif array op
    for(y;y>z;y--)
        urruy[y]=urruy[y-1];
    urruy[z]=array[x];
 }
 //schrijf array
 for(y=0;y<3;y++)
    printf("\n%d",urruy[y]);
}

/* previous idea
if(array[x]>=urruy[y])
    if(array[x]>=urruy[y-1])
        if(array[x]>=urruy[y-2])
            z=0;
        else
            z=1;
    else
        z=2;
else
    z=3;*/

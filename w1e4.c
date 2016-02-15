#include <stdio.h>

void findarray(char array[], int Size);
int main(int argc, char **argv)
{
    int y;
    char array[] = {'a','b','c','a','b','c','a','b','c'};
    int Size = sizeof(array) / sizeof(char);
    printf("Unsorted array\n");
    for(y=0;y<9;y++)
        printf("%c\t",array[y]);
    findarray(array, Size);
}

void findarray(char array[], int Size)
{

 int i,x,y,z;
 /*if(!Size)
    Size=90000;
    getting trolled by IDE
    */
 int urruy[9001]={};
 for(x=0;x<Size;x++) {
    y=(Size-1);
    z=(Size+1);
    //decide swap spaces
    for(i=0;i<Size;i++) {
        if(array[x]>=urruy[y-i])
            z=(y-i);
    }
    //schuif array op
    for(y;y>z;y--)
        urruy[y]=urruy[y-1];
    urruy[z]=array[x];
 }
 //schrijf array
 printf("\n\nSorted array\n");
 for(y=8;y>-1;y--) {
    printf("%c\t",urruy[y]);
 }

}

#include<stdio.h>

struct Demo
{
    int i;        //4
    int *ptr;     //8
};                //12     //16 with padding
              
int main()
{
    struct Demo dobj;

    printf("Size of object : %lu\n",sizeof(dobj));  //either 8 or 16 depends on compiler 
    




    return 0;
}
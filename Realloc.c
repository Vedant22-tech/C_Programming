#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0;
    int Size = 0 ;
    char*Name = NULL;
    int newsize = 0;

    printf("Enter the character of name :\n");
    scanf("%d",&Size);

    Name = (char*)malloc (Size*sizeof(char));

    printf("Enter the name :\n");
    for(i=0;i<Size;i++)
    {
        scanf("%c",&Name[i]);
    }
    printf("The Entered name is :\t");
    for(i=0;i<Size;i++)
    {
        printf("%c",Name[i]);
    }

    printf("\nEnter String to be added to char:\n");
    scanf("%d",&newsize);

    Name = (char*)realloc(Name,newsize*sizeof(char));

    printf("Enter added char:\n");
    for(i=0;i<newsize;i++)
    {
        scanf("%c",&Name[i]);
    }

    printf("Enter added char :\t");
    for(i=0;i<newsize;i++)
    {
        printf("%c",Name[i]);
    }

    free(Name);

    return 0;

}
#include<stdio.h>
int main()
{
    int choice;
    printf("1. add\n2. subtract\n3. multiply\nenter choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("you chose addition\n");
            break;
        case 2:
            printf("you chose subtraction\n");
            break;
        case 3:
            printf("you chose multiplication\n");
            break;
        default:
            printf("invalid choice\n");
    }
}
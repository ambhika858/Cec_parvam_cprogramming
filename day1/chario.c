# include<stdio.h>
int main(void)
{
    int ch;
    printf("enter a charecter:");
    ch=getchar();
    printf("you entered:");
    putchar(ch);
    putchar('\n');
    return 0;
}
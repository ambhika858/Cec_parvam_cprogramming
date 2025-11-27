#include<stdio.h>
void funt()
{
    int x=0;
    printf("a value %d",x);
    x++;
}
void static_vari()
{
    static int x=0;
    printf("a value %d",x);
    x++;
}
int main()
{
    funt();
    funt();
    
    funt();
    static_vari();
    static_vari();
    static_vari();
    return 0;

}


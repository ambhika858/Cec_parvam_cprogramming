#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50};//line 5:initial array with 5 elements
    int size=5;//line 6:current size of the array
    int pos=2;//line 7:position where value will be inserted
    int value=25;//line 8: new value to be inserted
    //shifting elements to the right from the position
    for(int i=size-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];//line 12: shifting elements to the right
    }
    arr[pos]=value;//line 14: inserting the new value at the specified position
    size++;//line 15: increasing the size of the array
    //printing the updated array
    printf("Array after insertion:\n");
    for(int i=0;i<size;i++)
    {//line 19:loop to print the array elements
        printf("%d ",arr[i]);
    }
    return 0;
}


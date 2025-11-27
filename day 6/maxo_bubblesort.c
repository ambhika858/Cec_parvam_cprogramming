#include<stdio.h>
int main(void)
{
    int arr[5] = {5,2,9,1,3};
    int n=5;
    int i,j;

    int max = arr[0];

    for (i=1;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("maximum element (o(n)) = %d\n",max);

    for (i = 0;i<n-1;i++)
    {
        for (j = 0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("sorted array (o(n^2)) = ");
    for (i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
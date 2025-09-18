#include<stdio.h>
int main()
{
    int arr[6]={2,3,4,5,6,7};
    int len= sizeof(arr)/sizeof(arr[0]);
    printf("Display Array Elements.\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nArray Elements in Reverse Order.\n");
    for(int i=len-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
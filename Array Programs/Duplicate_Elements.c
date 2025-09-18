#include<stdio.h>
int Remove_Duplicates(int arr[],int n)
{
    int newsize=0;
    
    for(int i=0;i<n;i++)
    {
        int duplicate=0;
        for(int j=0;j<newsize;j++)
        {
            if(arr[i]==arr[j])
            {
            duplicate=1;
            break;
            }
        }
        if(!duplicate)
        {
        arr[newsize]=arr[i];
        newsize++;
        
        }
    }
    return newsize;
    
}
int main()
{
    int arr[7]={2,2,2,3,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Array Elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    n=Remove_Duplicates(arr,n);
    printf("\nAfter Removing duplicates, The Array Elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
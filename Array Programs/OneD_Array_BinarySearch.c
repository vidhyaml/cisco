#include<stdio.h>
int BinarySearch(int a[],int len,int key){
    int low=0, high=len-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            low = mid+1;
        }
        else
        {
            high = mid -1;
        }
    }
    
    return -1;
}
int main()
{
    int a[]={10,20,30,40,50,60};
    int len=sizeof(a)/sizeof(a[0]);
    int key;
    printf("Enter a key:");
    scanf("%d",&key);
    int index= BinarySearch(a,len,key);
    if(index!= -1 )
    {
        printf("Element found at index %d",index);
    }
    else{
        printf("element Not Found.");
    }
}
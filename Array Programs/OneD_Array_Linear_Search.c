#include<stdio.h>
int LinearSearch(int a[],int len,int key){
    for(int i=0;i<len;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[]={56,87,98,23,65,53};
    int len=sizeof(a)/sizeof(a[0]);
    int key;
    printf("Enter a key:");
    scanf("%d",&key);
    int index= LinearSearch(a,len,key);
    if(index!= -1 )
    {
        printf("Element found at index %d",index);
    }
    else{
        printf("element Not Found.");
    }
}
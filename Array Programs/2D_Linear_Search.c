#include<stdio.h>
int LinearSearch(int a[][],int rows,int cols,int key){
   for(int i=0;i<rows;i++)
   {
    for(int j=0;j<cols;j++)
    {
        if(a[i][j]==key)
        rer
    }
   }
    return -1;
}
int main()
{
    int a[3][3]={{34,56,89},{23,89,67},{65,90,79}};
    int len=sizeof(a)/sizeof(a[0]);
    int key;
    printf("Enter a key:");
    scanf("%d",&key);
    int index= LinearSearch(a,3,3,key);
    if(index!= -1 )
    {
        printf("Element found at index %d",index);
    }
    else{
        printf("element Not Found.");
    }
}
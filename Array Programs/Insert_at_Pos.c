#include <stdio.h>

int Insert_an_Element(int arr[], int n, int pos,int item)
{
    if (pos < 0 || pos > n)
    {
        printf("\nInvalid Position!!\n");
        return n;   // size unchanged
    }

    for (int i = n;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos]=item;
    return n + 1;   // new size
}

int main()
{
    int arr[10] = {2, 3, 4, 5, 6, 7};
    int pos,item;
    int n = 6;

    printf("Original Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the index at which item to be inserted: ");
    scanf("%d", &pos);
    printf("\nEnter the item to be inserted: ");
    scanf("%d", &item);

    n = Insert_an_Element(arr, n, pos, item);

    printf("Array elements after Insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

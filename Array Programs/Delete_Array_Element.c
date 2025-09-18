#include <stdio.h>

int Delete_an_Element(int arr[], int n, int pos)
{
    if (pos < 0 || pos >= n)
    {
        printf("\nInvalid Position!!\n");
        return n;   // size unchanged
    }

    printf("\nItem to be deleted: %d\n", arr[pos]);

    for (int i = pos + 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    return n - 1;   // new size
}

int main()
{
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int pos;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the index whose content has to be deleted: ");
    scanf("%d", &pos);

    n = Delete_an_Element(arr, n, pos);

    printf("Array elements after deletion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[100],n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for( i = 0; i < n; i++)
    {
        printf("Enter array Elements: ");
        scanf("%d",&arr[i]);
    }
    printf("\n");

    // Traversal of array

    printf("The array Elements are: ");
    for( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);

    }
    return 0;
}

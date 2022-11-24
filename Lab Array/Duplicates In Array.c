#include <stdio.h>

int main()
{
    int arr[11];
    int i, j, size, count = 0;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Find all duplicate elements in array
     */
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nDuplicate elements found in array = %d", count);

    return 0;
}

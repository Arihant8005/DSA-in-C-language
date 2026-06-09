//count frequency of elemnets in an array
#include <stdio.h>

void frequency(int a[], int size);

int main()
{
    int a[] = {1, 1, 2, 2, -55, -55, 2, 9, 8, 0};
    int size = sizeof(a) / sizeof(a[0]);

    frequency(a, size);

    return 0;
}

void frequency(int a[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int count = 1;
        int visited = 0;

        // Check if current element was already counted
        for(int k = 0; k < i; k++)
        {
            if(a[i] == a[k])
            {
                visited = 1;
                break;
            }
        }

        if(visited == 1)
            continue;

        // Count occurrences
        for(int j = i + 1; j < size; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        printf("%d appears %d times\n", a[i], count);
    }
}
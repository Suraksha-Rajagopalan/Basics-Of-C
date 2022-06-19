#include <stdio.h>

int main()
{
    int m;
    printf("The number of elements in the array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter the elements of the array: ");

    for (int j = 0; j < m; j++)
    {
        scanf("%d ", &a[j]);
    }

    int max= a[0];
    int index_max;
    int min= a[0];
    int index_min;

    for (int i = 0; i < m; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index_max = i;
        }

        if (a[i] < min)
        {
            min = a[i];
            index_min = i;
        }
        
    }

    a[index_min] = max;
    a[index_max] = min;

    printf("Max %d Index %d\n Min %d Index %d\n",max, index_max, min, index_min);

    for (int k = 0; k < m; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}

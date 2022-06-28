#include <stdio.h>

int main()
{
    int m=0, n=0, temp1=0, temp2=0;
    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int arr[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j]=0;
    printf("Enter the elements of the array:\n ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    printf("The given matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // for interchanging rows
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            temp1 = arr[i][j];
            arr[i][j] = arr[i+1][j];
            arr[i + 1][j] = temp1;
        }
    }
    // for interchanging columns
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            temp2 = arr[i][j];
            arr[i][j] = arr[i][j + 1];
            arr[i][j + 1] = temp2;
        }
    }

    // displaying the new array after interchanging the values

    printf("The new matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
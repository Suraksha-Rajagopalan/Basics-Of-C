#include <stdio.h>
void index(int *i,int *j){
    printf("Row index is: %d\nColumn index is: %d\n",*i,*j);
}

int main()
{
    int m, n;
    printf("Enter the rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the columns of the matrix: ");
    scanf("%d", &n);

    int arr[m][n];
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
    int element;
    printf("Enter an element: ");
    scanf("%d",&element);
    for (int i=0; i<m; i++)
        for (int j=0;j<n; j++)
            if (arr[i][j]==element)
                index(&i,&j);
    return 0;
}
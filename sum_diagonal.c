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

    int mainDia=0;
    int oppDia=0;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                mainDia+=arr[i][j];
            }
        }
        for (int k = 0; k < n; k++){
            if (i+k == n-1){
                oppDia += arr[i][k];
            }
        }
    }

    printf("The sum of the Main Diagonal elements is: %d\n",mainDia);
    printf("The sum of the opposit Diagonal elements is: %d",oppDia);
    return 0;
}
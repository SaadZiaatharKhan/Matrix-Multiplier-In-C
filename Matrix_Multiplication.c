#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int A_rows_no, A_columns_no, B_rows_no, B_columns_no;
    float temp_store1,temp_store2;
    float initialize1=0;
    int initialize2=0;
    printf("This Program Is For Matrix Multiplication\n\n\n");
    printf("Enter The Number Of Rows In Matrix A\n");
    scanf("%d", &A_rows_no);
    printf("Enter The Number Of Columns In Matrix A\n");
    scanf("%d", &A_columns_no);
    printf("Enter The Number Of Rows In Matrix B\n");
    scanf("%d", &B_rows_no);
    printf("Enter The Number Of Columns In Matrix B\n");
    scanf("%d", &B_columns_no);

    if (A_columns_no != B_rows_no)
    {
        printf("\nGiven Matrices Are Not Multiplicable.\n");
    }

    else
    {

        printf("\nEnter The Values In Matrix A : \n");
        float Matrix_A[A_rows_no][A_columns_no];
        for (int i = 0; i < A_rows_no; i++)
        {
            printf("[");
            for (int j = 0; j < A_columns_no; j++)
            {
                printf("\t");
                scanf("%f", &temp_store1);
                Matrix_A[i][j] = temp_store1;
            }
            printf("]\n");
        }

        printf("\nEnter The Values In Matrix B : \n");
        float Matrix_B[B_rows_no][B_columns_no];
        for (int i = 0; i < B_rows_no; i++)
        {
            printf("[");
            for (int j = 0; j < B_columns_no; j++)
            {
                printf("\t");
                scanf("%f", &temp_store1);
                Matrix_B[i][j] = temp_store1;
            }
            printf("]\n");
        }

        printf("\nGiven Matrix A Is :\n");
        for (int i = 0; i < A_rows_no; i++)
        {
            printf("[");
            for (int j = 0; j < A_columns_no; j++)
            {
                printf("\t");
                printf("%f", Matrix_A[i][j]);
            }
            printf("]\n");
        }

        printf("\nGiven Matrix B Is :\n");
        for (int i = 0; i < B_rows_no; i++)
        {
            printf("[");
            for (int j = 0; j < B_columns_no; j++)
            {
                printf("\t");
                printf("%f", Matrix_B[i][j]);
            }
            printf("]\n");
        }

        int total_elements_no=A_rows_no*B_columns_no;
        float total_elements[total_elements_no];
        float Matrix_C[A_rows_no][B_columns_no];
        for (int i = 0; i < A_rows_no; i++)
        {   
            initialize1=0;
            for (int j = 0; j < B_columns_no; j++)
            {
                temp_store2=Matrix_A[i][j]*Matrix_B[j][i];
                initialize1=initialize1+temp_store2;
                total_elements[initialize2]=initialize1;
                initialize2++;
            }
        }

        printf("The Multiplication Of Given Two Matrices Is : \n");
        for (int i = 0; i < total_elements_no; i++)
        {
            printf("[");
            for (int i = 0; i < A_rows_no; i++)
            {
                printf("\t%f",total_elements[i]);
            }
            printf("]\n");
        }
        
    }
    return 0;
}
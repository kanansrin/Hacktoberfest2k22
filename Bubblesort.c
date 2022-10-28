#include<stdio.h>
void print(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void Bubblesort(int A[],int low,int high)
{
    int i,j,temp;
    for ( i = low; i <=high-1; i++)
    {
        for(j=low;j<=high-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
        
    }
    
}
int main()
{
    int A[] = {15, -2, 7, 3, 11, 5, -4, 0};
    int n = 8;
    print(A, n);
    Bubblesort(A, 0, n - 1);
    print(A, n);
    return 0;
}

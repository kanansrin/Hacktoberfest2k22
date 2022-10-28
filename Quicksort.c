#include <stdio.h>
void print(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{

    int pivot, i, j, temp;
    pivot = A[low];
    i = low + 1;
    j = high;
    do
    {
        while (A[i] <= pivot)
    
        {
            i++;
        }
        while (pivot < A[j])
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void Quicksort(int A[], int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(A, low, high);
        Quicksort(A, low, partitionindex - 1);
        Quicksort(A, partitionindex + 1, high);
    }
}
int main()
{
    int A[] = {15, -2, 7, 3, 11, 5, -4, 0};
    int n = 8;
    print(A, n);
    Quicksort(A, 0, n - 1);
    print(A, n);
    return 0;
}
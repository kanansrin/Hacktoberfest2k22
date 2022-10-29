#include<stdio.h>
void print(int *A, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
         printf("%d\t",A[i]);
    }
    printf("\n");
}
void Merge(int A[],int low,int mid,int high)
{
    int i,j,k,B[high];
    i=low;
    k=low;
    j=mid+1;
    while (i<=mid && j<=high)
    {
        if(A[j]>A[i])
        {
            B[k]=A[i];
            i++;
            k++;
        }
        else
        {
            B[k]=A[j];
            j++;
            k++;
        }
    }
    while (i<=mid)
    {
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        B[k]=A[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++)
    {
        A[i]=B[i];
    }
    
    
}
void Mergesort(int A[],int low, int high)
{
    int mid;
    mid=(low + high)/2;
    if(low<high)
    {
        Mergesort(A,low,mid);
        Mergesort(A,mid+1,high);
        Merge(A,low,mid,high);
    }
}
int main()
{
    int A[]={8,4,4,-2,11,3,0};
    int n=7;
    print(A,n);
    Mergesort(A,0,n-1);
    print(A,n);
}
#include<stdio.h>
void insertion_sort(int array[],int n)
{
    int temp,j,i;
    for(i=1;i<n;i++)
    {
        temp=array[i];
        j=i-1;
        while(j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
}
void display(int array[],int n)
{
    printf("Sorted version\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}
int main()
{
    int n;
    printf("Enter the number of array= ");
    scanf("%d",&n);

    int array[n];
    printf("Enter the data= ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    insertion_sort(array,n);
    display(array,n);
}

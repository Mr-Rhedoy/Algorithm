#include<stdio.h>
void selection_sort(int array[],int n)
{
    int i,j,temp,min;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
            if(min!=i)
            {
                temp=array[min];
                array[min]=array[i];
                array[i]=temp;
            }
        }
    }
}

void display(int array[],int n)
{
    printf(" Sorted Array = ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
}
int main()
{
    int n;
    printf("How many number you want= ");
    scanf("%d",&n);

    int array[n];
    printf("Enter the data= ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    selection_sort(array,n);
    display(array,n);
}

#include<stdio.h>
void bubble_sort(int array[],int n)
{
    int temp,flag;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            flag=0;
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            flag=1;
        }
        if(flag==0)
        {
            break;
        }
    }
}
    void display(int array[], int n)
    {
        printf("Sorted array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", array[i]);
        }
    }
        int main()
        {
            int n;
            printf("Enter how many arrays you want= ");
            scanf("%d",&n);

            int array[n];
            printf("Enter the numbers Desenging order= ");
            for(int i=0; i<n; i++)
            {
                scanf("%d",&array[i]);
            }
            bubble_sort(array,n);
            display(array,n);
            return 0;
        }

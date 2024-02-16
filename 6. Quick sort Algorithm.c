#include<stdio.h>

int partition(int array[],int l,int h)
{
    int pivot=array[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(array[i]<=pivot)
        {
            i++;
        }
        while(array[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    int temp = array[l];
    array[l] = array[j];
    array[j] = temp;


    return j;
}
void Quick_sort(int array[],int l,int h)
{
    if(l<h)
    {
        int j=partition(array,l,h);
        Quick_sort(array,l,j-1);
        Quick_sort(array,j+1,h);
    }

}
void display(int array[], int l, int h)
{
    for (int i = l; i <= h; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter how many data you want to enter= ");
    scanf("%d",&n);

    int array[n];
    printf("Enter the data= ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }
    int l,h;
    l=0;
    h=n-1;

    partition(array,l,h);
    Quick_sort(array,l,h);
    printf("sorted Array= \n");
    display(array,l,h);

}

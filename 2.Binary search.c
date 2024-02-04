#include<stdio.h>
int binary_search(int arr[],int n, int data )
{
    int l,r,mid;
    l=0;
    r=n-1;

    while(l<=r)
    {
        mid = (l+r)/2;
        if(data==arr[mid])
        {
            return mid;
        }
        else if(data>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
    return -1;

}
int main()
{
    int n;

    printf("Enter how many numbers you want to add= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array list in asceding order= ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int data;
    printf("Enter the data want to search= ");
    scanf("%d",&data);
    int result = binary_search(arr, n, data);
    if (result!= -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}

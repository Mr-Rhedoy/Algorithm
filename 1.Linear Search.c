#include<stdio.h>
int main()
{
    int array[] = {5,2,10,6,7,13};
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    int found=0;
    for(i=0; i<6; i++)
    {
        if(array[i]==n)
        {
            printf("Data found %d",i);
            found++;
            break;
        }
    }
    if(found==0)
    {
        printf("Data not found");
    }
}

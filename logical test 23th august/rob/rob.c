#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    int i;
    int sum=0;
    printf("enter the number of houses present :");
    scanf("%d",&n);
    printf("enter the cash present in each house :");
    for(i=1;i<=n;i++)
    {
        printf("house no %d :",i);
        scanf("%d",&arr[i]);
    }

    printf("the total amount robber can rob is :\n");

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
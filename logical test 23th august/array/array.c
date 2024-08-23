#include <stdio.h>

int main()
{
    int a[100],n,flag=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    { 
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("\nThe single element in the array :");
            printf("%d",a[i]);
        }
    }

    return 0;
}
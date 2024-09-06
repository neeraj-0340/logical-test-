#include <stdio.h>

int main()
{
    int a[100],n,flag=0,b[100],i,j;
    int count=0;
    int largest;
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
            b[count]=a[i];
            count++;
        }
    }

    if(count == 0)
    {
        printf("NULL");
    }
    else{
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            if (b[j] > b[i])
            {
                largest=b[j];
            }
            
        }
        
    }
    

    printf("largest number is : %d",largest);
    }
    

    return 0;
}
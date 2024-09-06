#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,num[100],num1[100],n,count=0;
    printf("enter the size :");
    scanf("%d",&n);
    printf("enter the elements :");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    for ( i = 0; i < n; i++)
    {
            num1[count] = num[i];
            count++;
            if (num[i] == 0)
            {
                num1[count] = 0;
                count++;
            }
            
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d",num1[i]);
    }
    
    
    
}
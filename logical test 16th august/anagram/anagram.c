#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char str1[100];
    int i, j;
    char temp;

    printf("enter 1st string");
    scanf("%[^\n]%*c", &str);
    int l1 = strlen(str);

    printf("enter 2nd string");
    scanf("%[^\n]%*c", &str1);
    int l2 = strlen(str1);

    for (i = 0; i < l1; i++)
    {
        for (j = i  +1; j < l2; j++)
        {
            if (str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[i] = temp;
            }
        }
    }
    for (i = 0; i < l1; i++)
    {
        for (j = i  +1; j < l2; j++)
        {
            if (str1[i] < str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[i] = temp;
            }
        }
    }

    if (l1 != l2)
    {
        printf("its not anagram");
    }
    else
    {
        if (strcmp(str, str1) == 0)
        {
            printf("its anagram");
        }
        else
        {
            printf("its not anagram");
        }
    }
    return 0;
}
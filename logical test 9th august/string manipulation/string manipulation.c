#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    char string[100];
    char ch[100];
    printf("\n Enter the String : ");
    scanf("%[^\n]%*c", string);
    n = strlen(string);

    printf("\n enter character : ");
    scanf(" %c", &ch);

    for (i = 0; i < n; i++)
    {
        if (string[i] != ch[0])
        {
            printf("%c", string[i]);
        }
    }

    return 0;
}
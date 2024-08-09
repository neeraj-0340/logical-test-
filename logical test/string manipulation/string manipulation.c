#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    char s[100];
    char ch[100];
    printf("\n Enter the String : ");
    scanf("%[^\n]%*c", s);
    n = strlen(s);

    printf(" enter character : ");
    scanf(" %c", &ch);

    for (i = 0; i < n; i++)
    {
        if (s[i] != ch[0])
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}

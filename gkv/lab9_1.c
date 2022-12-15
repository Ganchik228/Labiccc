#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* str)
{
    int wordEnd = strlen(str) - 1, wordStart = 0;
    char buf;
    while(wordStart < wordEnd)
            {
                buf = str[wordStart];
                str[wordStart] = str[wordEnd];
                str[wordEnd] = buf;
                wordStart++;
                wordEnd--;
            }
    return str;
}

void revStr(char str[])
{
    // char delim[] = "!@#%%^/.*()"", ";
    char delim[] = ", ";
    char *buf = strtok(str, delim);
    printf("%s", reverse(buf));
    while((buf = strtok(NULL, delim)))
    {
        printf(" %s", reverse(buf));
    }
}

int main()
{
    char inpstr[1000];

    fgets(inpstr, 1000, stdin);

    revStr(inpstr);
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void revStr(char str[])
{
    int wordStart = 0, wordEnd = 0;
    char buf;

    for(int i = 0; i < strlen(str); i++)
    {
        if(isalpha(str[i]) == 0 || i + 1 == strlen(str))
        {
            wordEnd = i - 1;
            while(wordStart < wordEnd)
            {
                buf = str[wordStart];
                str[wordStart] = str[wordEnd];
                str[wordEnd] = buf;
                wordStart++;
                wordEnd--;
            }
            wordStart = i + 1;
        }

    }
}

int main()
{
    char inpstr[1000];

    fgets(inpstr, 1000, stdin);

    revStr(inpstr);
   
    printf("%s", inpstr);

    return 0;
}
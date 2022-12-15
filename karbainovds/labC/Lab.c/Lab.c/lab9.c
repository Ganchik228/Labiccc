#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "I’m going off the rails on a crazy train";
    //char delim[] = " ";
    //char *p = strstr(str, delim);
    size_t g = strlen(str);
    int i, n=0;
    //printf("%c", str[0]);
    for (i=0;i< g;i++){
        if (str[i]==' '){
            printf("%c", str[i+n]);
            n++;
        }
        
    }
    printf("%d", n);
    printf("\n");
    return 0;
}

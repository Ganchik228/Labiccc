#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <ctype.h>
#include <stdio_ext.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
}

int main()
{
    int counter=0;
    while (1){
        char a = mygetch();
        if (a==53){
            printf("\n");
            printf("%d\n", counter);
            return 0;
            
            // }
            
                
        }
        else if (a==27 || a==10){
            __fpurge(stdin);
        }
        //printf("%c\n", a);
        printf("%c", a);
        // if (a!=27){
        if (isalpha(a)!=0){
            counter++;
        }
        
        
    }

    // return 0;
}
 
//27 91 53 126
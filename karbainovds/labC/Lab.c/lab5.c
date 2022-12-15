#include <stdio.h>
#include <math.h>

int s1mple(int n, int a){
    if (n==0){
        return 0;
        
    }
    else if (a==1){
            return 1;
        }
    else if (n % a != 0) {
        return s1mple(n, a-1);
            
    }
    else{
        return 0;
    }
}
void simple(int b){
    int z = 0, i;
    if (b==0) {
        printf("cycle: number isn't simple\n");
        
    }
    else{
        for (i = 1; i<=b-2; i++){
            //printf("%d", z);
            if (b%(b-i) ==0){
                //b = b-1;
                z += 1;
            }
            //else{
            //   break;
            //}
            
        }
        if (z > 0){
            printf("cycle: number isn't simple\n");
        }
        else{
            printf("cycle: number is simple\n");
        }
    }
}
int main()
{
    int num;
    printf("enter a number -> ");
    scanf("%d", &num);
    if (num<0){
        printf("error number \n");
    }
    else if (s1mple(num, num-1) == 1){
        printf("recursion: number is simple\n");
        simple(num);
    }
    
        else{
            printf("recursion: number isn't simple\n");
            simple(num);
        }
    
    return 0; 
}

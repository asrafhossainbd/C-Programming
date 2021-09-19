#include <stdio.h>
int main()
{
    /*
    int n;

    n = 10;

    if(n >= 0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is negative\n");
    }
    */
    /*
    int n;

    n = 10;

    if(n < 0){
        printf("The number is negetive\n");
    }
    else{
        printf("The number is positive\n");
    }
    */

    int n = 10;

    if(n < 0){
        printf("The number is negative\n");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else{
        printf("The number is zero\n");
    }
    
    return 0;
}
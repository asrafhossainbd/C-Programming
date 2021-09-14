#include <stdio.h>

int main()
{
    // printf("Hello World!");

    /*
    int a;
    int b;
    int sum;
    */
   
   //Second way to "Variable Declaration"
   
   /*
    int a, b, sum;

    a = 50;
    b = 60;

    */

    //Variable between declaration & assignment
    
    /*
    int a = 50, b = 60, sum;

    sum = a + b;

    printf("Sum is: %d", sum);
    */

    //e.g.:
    /*
    int x, y;

    x = 1;
    y = x;
    x = 2;

    printf("%d", y); //Ans: 1
    */

    //e.g.:
    /*
    int a = 50, b = 60, sum;

    sum = a + b;

    printf("%d + %d = %d", a, b, sum); //Ans: 50 + 60 = 110
    */

    //Experiment:
    //Using Real Number(Ex. 40.35) in integer Data type
    /*
    int a = 50.45, b = 60, sum;

    sum = a + b;

    printf("%d + %d = %d", a, b, sum); 
    
    //Ans: 50 + 60 = 110 
    //Note: This is Call (Type Cast)
    */

    //Experiment:
    //How to knows Type Cast Value is not Change

    int n;
    double x; //double" data type, it career Real Number value

    x = 10.5;
    n = (int)x;

    printf("Value of n is %d\n", n); //Ans.: Value of n is 10 Note: type cust hare, x was double data type than x convart in int data type 
    printf("Value of x is %lf\n", x); //Ans.: Value of x is 10.500000

    return 0;
}
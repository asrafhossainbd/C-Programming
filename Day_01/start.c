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
    /*
    int n;
    double x; //double" data type, it career Real Number value

    x = 10.5;
    n = (int)x;

    printf("Value of n is %d\n", n); //Ans.: Value of n is 10 Note: type cust hare, x was double data type than x convart in int data type 
    printf("Value of x is %lf\n", x); //Ans.: Value of x is 10.500000
    */

    //Experiment:
    //Is int data type can take any integer number?
    /*
    int a;

    a = 1000;
    printf("Value of a is %d\n", a); //Ans: 1000

    a = -21000;
    printf("Value of a is %d\n", a); //Ans: -21000

    a = 10000000;
    printf("Value of a is %d\n", a); //Ans: 10000000

    a = -10000000;
    printf("Value of a is %d\n", a); //Ans: -10000000

    a = 100020004000503;
    printf("Value of a is %d\n", a); //Ans: -1194388745 Note: This Value is not in integer data type range

    a = -4325987632;
    printf("Value of a is %d\n", a); //And: -31020336 Note: This Value is not in integer data type range
    
    //Note: The INTEGER data type stores whole numbers that range from -2,147,483,647 to 2,147,483,647 for 9 or 10 digits of precision
    */

   /*
    //Some addition using double data type
    double a, b, sum;

    a = 9.5;
    b = 8.743;

    sum = a + b;

    printf("Sum is: %lf\n", sum);
    printf("Sum is: %0.2lf\n", sum);
    */

    //Input value form user
    
    int a, b, sum;

    /*
    scanf("%d", &a);
    scanf("%d", &b);
    */

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum is: %d", sum);

    return 0;
}
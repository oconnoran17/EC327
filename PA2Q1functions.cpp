#include <iostream>
#include <fstream>
#include <math.h>
#include <time.h>
#include "pa2Functions.h"
using namespace std;


//1
void initialize()
{
    extern int ENTRIES;
    /*
    This function must print the program output header. The output header should contain the
    name and number of the course, the semester and year, the assignment name, and the value of 
    ENTRIES. The values of ENTRIES must be obtained from Q1.cpp. This function is called from
    main().
    (Header Sample)
    EC327: Introduction to Software Engineering
    Fall 2019
    Programming Assignment 2
    Value of Entries is: 10
    */
   cout << "EC327: Introduction to Software Engineering" << endl;
   cout << "Fall 2019" << endl;
   cout << "Programming Assignment 2" << endl;
   cout << "Values of Entries is : " << ENTRIES << "\n\n" << endl;
}

//2
bool checkCode(char incode)
{   /*
    This function should return true if the command code in parameter “code” is a legal code
    character; otherwise, the function should return false. You have to use this function to check
    your user input. This function is called from main().
    */
    int count = 0;
    bool legal;
    char codes[32] = 
        {'F', 'f',
        'B', 'b',
        'R', 'r',
        'U', 'u',
        'C', 'c',
        'E', 'e',
        'K', 'k',
        'S', 's',
        'N', 'n',
        'X', 'x',
        'L', 'l',
        'Y', 'y',
        'D', 'd',
        'I', 'i',
        'O', 'o',
        'Q', 'q'};

    for (int j = 0; j < 32; j++)
    {
        if (incode == codes[j])
            count++;
    }
    
    if (count > 0)
        legal = true;
    else 
        legal = false;

    return (legal);
}

//3 O
void writeDataToFile(const char* filename)
{
    /*
    This function will write the output of the program to a file specified by user input. This only
    works for input provided AFTER this command has been provided. The output being written to a
    file should also be displayed to the console as well. Writing to a file ends when the quit
    command is provided.
    */
   output.open(filename);
}






//5 F
int factorial(int n)
{
    /*
    This function returns the factorial value of the given integer argument.
    */
    if(n > 1)
        return (n * factorial(n - 1));
    else
        return 1;
}

//6 B
int fibonacci(int n)
{
    /*
    This function returns the Fibonacci number at the index given by the provided argument.
    */
   if (n <= 1) 
        return n; 
   else 
        return (fibonacci(n-1) + fibonacci(n-2)); 
}

//7 R
double findSqrtValue(double num)
{
    /*
    This function returns the square root of the argument.
    */
   return(sqrt(num));
}

//8 L
double naturalLog(double num)
{
    /*
    This function returns the natural log of the provided argument.
    */
   return(log(num));
}

//9 C
double areaCircle(double radius)
{
    /*
    This function returns the area of a circle provided the radius.
    */
   return(radius*radius*3.14159);
}

//10 U
double areaSquare(double side)
{
    /*
    This function returns area of a square provided the length of its side.
    */
   return (side*side);
}

//11 D
int findNextOddValue(int num)
{
    /*
    This function returns an odd number closest and higher to the provided number.
    */
   num++;

   if (num%2 == 0)
   {
    num++;
    return num;
   }
   else
   {
       return(num);
   }
}

//12 E
int findNextEvenValue(int num)
{
    /*
    This function returns an even number closest and higher to the provided number.
    */
   num++;

   if (num%2 == 0)
   {
    return num;
   }
   else
   {
       num++;
       return(num);
   }
}

//13 Y
double findNyanCatValue(double myNum)
{
    /*
    If this function takes in myNum this function with return
    (4 * myNum)myNum + myNum + 10
    */
   double newnum = (4 * myNum)*myNum + myNum + 10;

   return(newnum);
}

//14 S N X
double doMath(double num, char trig)
{
    /*
    This function performs either sin, cosine, or the exponential function for the value provided. The
    operation to perform is based on the char that is provided.
    */
   double ans;

   if (trig == 'S' || 's')
    ans = sin(num);
   else if (trig == 'N' || trig == 'n')
    ans = cos(num);
   else if (trig == 'X' || trig == 'n')
    ans = exp(num);

   return(ans);
   
}

//15 K
double lucky(double num)
{
    /*
    This function returns a random number using the system time and the argument as a seed.
    */
   srand(num);
   double newnum = rand();
   return newnum;
}

//4 I
void readDataFromFile(const char * filename)
{
    /*
    The function will read commands from a file specified by user input. This function is called from
    main(). The commands in this file should be formatted each on two lines consistent with how
    the user would enter them from the command line.
    e.g.
    f
    10
    R
    10 20 .2
    */

   input.open(filename);
}





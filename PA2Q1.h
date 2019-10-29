#include <iostream>
#include <fstream>
using namespace std;

extern ofstream output;

extern ifstream input;

void initialize();
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
bool checkCode(char);
    /*
    This function should return true if the command code in parameter “code” is a legal code
    character; otherwise, the function should return false. You have to use this function to check
    your user input. This function is called from main().
    */
void writeDataToFile(const char *);
    /*
    This function will write the output of the program to a file specified by user input. This only
    works for input provided AFTER this command has been provided. The output being written to a
    file should also be displayed to the console as well. Writing to a file ends when the quit
    command is provided.
    */
void readDataFromFile(const char *);
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
int factorial(int);
    /*
    This function returns the factorial value of the given integer argument.
    */
int fibonacci(int);
    /*
    This function returns the Fibonacci number at the index given by the provided argument.
    */
double findSqrtValue(double);
    /*
    This function returns the square root of the argument.
    */
double naturalLog(double);
    /*
    This function returns the natural log of the provided argument.
    */
double areaCircle(double);
    /*
    This function returns the area of a circle provided the radius.
    */
double areaSquare(double);
    /*
    This function returns area of a square provided the length of its side.
    */
int findNextOddValue(int);
    /*
    This function returns an odd number closest and higher to the provided number.
    */
int findNextEvenValue(int);
    /*
    This function returns an even number closest and higher to the provided number.
    */
double findNyanCatValue(double);
    /*
    If this function takes in myNum this function with return
    (4 * myNum)myNum + myNum + 10
    */
double doMath(double, char);
    /*
    This function performs either sin, cosine, or the exponential function for the value provided. The
    operation to perform is based on the char that is provided.
    */
double lucky(double);
    //This function returns a random number using the system time and the argument as a seed.
    

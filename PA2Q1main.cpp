#include <iostream>
#include <fstream>
#include "pa2Functions.h"
using namespace std;

extern const int ENTRIES = 10;
ofstream output;
ifstream input;

int main()
{
bool legal;

initialize();

while (true)
{
    char incode;
    //Ask the user for the next command code – “Please enter command code:”
    cout << "Please enter command code: ";
    if (output.is_open())
        output << "Please enter command code: ";

    //Read the code

    if (input.is_open()) {
        input >> incode;
        cout << incode << endl; }
    else
        cin >> incode;
    
    legal = checkCode(incode);
    
    //If the command is illegal, print an appropriate error message – “Invalid command code”
    while (!legal)
    {
        cout << "Invalid command code! Try again: " << endl;
        if (input.is_open()) {
            input >> incode;
            cout << incode; }
        else
            cin >> incode;
        legal = checkCode(incode);
    }

    //else if the command is quit, terminate the program
    if (incode == 'Q' || incode == 'q')
        break;
    else 
    {  
    if (output.is_open())
        output << incode << endl;  

        //3 write O
        if (incode == 'O' || incode == 'o')
        {
            char tempfile[20];

            cout << "Please enter command parameters: ";
            if (input.is_open()) {
                input >> tempfile;
                cout << tempfile << endl; }
            else
                cin >> tempfile;

            const char* file = tempfile;
            writeDataToFile(file);
        }
        //4 read I
        else if (incode == 'I' || incode == 'i')
        {
            char tempfile[30];

            cout << "Please enter command parameters: ";
            if (input.is_open()) {
                input >> tempfile;
                cout << tempfile << endl; }
            cin >> tempfile;

            if (output.is_open())
                output << "Please enter command paramters: " << endl;
                output << tempfile << endl;


            const char* file = tempfile;
        
            readDataFromFile(file);
        } 

        //5 factorial F
        else if (incode == 'F' || incode == 'f') 
                {
                    int fact;

                    cout << "Please enter command parameters: ";
                    if (input.is_open()) {
                        input >> fact;
                        cout << fact << endl; }
                    else
                        cin >> fact;
                    
                    if (output.is_open())
                        output << "Please enter command parameters: ";
                        output << fact << endl;

                    int ans = factorial(fact);
                    cout << ans << endl;
                    if (output.is_open())
                        output << ans << endl;

                }

        //6 fibonacci B
        else if (incode == 'B' || incode == 'b')
            {
                int fib;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> fib;
                    cout << fib << endl; }
                else
                    cin >> fib;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << fib << endl;
     
                int index = fibonacci(fib);
                cout << index << endl;
                if (output.is_open())
                    output << index << endl;
            }

        //7 SquareRoot R
        else if (incode == 'R' || incode == 'r')
            {
                double first;
                double last;
                double delta;
                double sqrt;
                double j;
                int count7 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else 
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;

                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if (count7 <  ENTRIES)
                        {
                        sqrt = findSqrtValue(j);
                        cout << sqrt << endl;
                        if (output.is_open())
                            output << sqrt << endl;
                        count7++;
                        }
                    }
                    if (count7 < ENTRIES)
                    {
                    j = last;
                    sqrt = findSqrtValue(j);
                    cout << sqrt << endl;
                    if (output.is_open())
                            output << sqrt << endl;
                    count7++;
                    }
                }
            }

        //8 Natural Log L
        else if (incode == 'L' || incode == 'l')
            {
                double first;
                double last;
                double delta;
                double natl;
                double j;
                int count8 = 0;
                cout << "Please enter command parameters: ";
                
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if (count8 < ENTRIES)
                        {
                        natl = naturalLog(j);
                        cout << natl << endl;
                        if (output.is_open())
                            output << natl << endl;
                        count8++;
                        }
                    }
                    if (count8 < ENTRIES)
                    {
                    j = last;
                    natl = naturalLog(j);
                    cout << natl << endl;
                    if (output.is_open())
                            output << natl << endl;
                    count8++;
                    }
                }
            }

        //9 Circle Area C
        else if (incode == 'C' || incode == 'c')
            {
                double first;
                double last;
                double delta;
                double carea;
                double j;
                int count9 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open())  {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if(count9 < ENTRIES)
                        {
                        carea = areaCircle(j);
                        cout << carea<< endl;
                        if (output.is_open())
                            output << carea << endl;
                        count9++;
                        }
                    }
                    if (count9 < ENTRIES)
                    {
                    j = last;
                    carea = areaCircle(j);
                    cout << carea << endl;
                    if (output.is_open())
                            output << carea << endl;
                    count9++;
                    }
                }
            }

        //10 Square Area U
        else if (incode == 'U' || incode == 'u')
            {
                double first;
                double last;
                double delta;
                double sarea;
                double j;
                int count10 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if (count10 < ENTRIES)
                        {
                        sarea = areaSquare(j);
                        cout << sarea<< endl;
                        if (output.is_open())
                            output << sarea << endl;
                        count10++;
                        }
                    }
                    if (count10 <  ENTRIES)
                    {
                    j = last;
                    sarea = areaSquare(j);
                    cout << sarea << endl;
                    if (output.is_open())
                            output << sarea << endl;
                    count10++;
                    }

                }
            }

        //11 Odd Value D
        else if (incode == 'D' || incode == 'd')
        {
                double first;
                double last;
                double delta;
                double oval;
                double j;
                int count11;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (first <= last)
                {
                    for (int j = first; j < last; j += 2)
                    {
                        if((count11 < ENTRIES) && ((last - oval) > 2))
                        {
                        oval = findNextOddValue(j);
                        cout << oval << endl;
                        if (output.is_open())
                            output << oval << endl;
                        count11 ++;
                        }
                    }
                    /*if  (count11 < ENTRIES)
                    {
                    j = last;
                    oval = findNextOddValue(j);
                    cout << oval << endl;
                    if (output.is_open())
                            output << oval << endl;
                    count11 ++; */
                    
                }
                
        }

        //12 Even Value E
        else if (incode == 'E' || incode == 'e')
        {
                double first;
                double last;
                double delta;
                double eval;
                double j;
                int count12 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (first <= last)
                {
                    for (int j = first; j < last; j += 2)
                    {
                        if((count12 < ENTRIES) && ((last - eval) > 2))
                        {
                        eval = findNextEvenValue(j);
                        cout << eval << endl;
                        if (output.is_open())
                            output << eval << endl;
                        count12 ++;
                        }
                    }
                    /*if (count12 < ENTRIES)
                    {
                    j = last;
                    eval = findNextEvenValue(j);
                    cout << eval << endl;
                    if (output.is_open())
                            output << eval << endl;
                    count12++;
                    }*/
                }
        }

        //13 Nyan Cat Y
        else if (incode == 'Y' || incode == 'y')
            {
                double first;
                double last;
                double delta;
                double nyan;
                double  j;
                int count13 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if (count13 < ENTRIES)
                        {
                        nyan = findNyanCatValue(j);
                        cout << nyan << endl;
                        if (output.is_open())
                            output << nyan << endl;
                        count13++;
                        }
                    }
                    if (count13 < ENTRIES)
                    {
                    j = last;
                    nyan = findNyanCatValue(j);
                    cout << nyan << endl;
                    if (output.is_open())
                            output << nyan << endl;
                    count13++;
                    }
                }
            }

        //14 Sine S, Cosine N, Exponent X
        else if (incode == 'S' || incode == 's' || incode == 'N' || incode == 'n' || incode == 'X' || incode == 'x')
            {
                double first;
                double last;
                double delta;
                double trig;
                double  j;
                int count14 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;

                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if(count14 < ENTRIES)
                        {
                        trig = doMath(j, incode);
                        cout << trig << endl;
                        if (output.is_open())
                            output << trig << endl;
                        count14++;
                        }
                    }
                    if(count14 < ENTRIES)
                    {
                    j = last;
                    trig = doMath(j, incode);
                    cout << trig << endl;
                    if (output.is_open())
                            output << trig << endl;
                    count14++;
                    }
                }
            }

        //15 Rand Num K
        else if (incode == 'K' || incode == 'k')
            {
                double first;
                double last;
                double delta;
                double randum;
                double  j;
                int count15 = 0;
                cout << "Please enter command parameters: ";
                if (input.is_open()) {
                    input >> first;
                    input >> last;
                    input >> delta;
                    output << first << " " << last << " " << delta << endl; }
                else
                    cin >> first >> last >> delta;

                if (output.is_open())
                    output << "Please enter command parameters: ";
                    output << first << " " << last << " " << delta << endl;
                
                if (delta > 0 && first <= last)
                {
                    for (int j = first; j < last; j += delta)
                    {
                        if(count15 < ENTRIES)
                        {
                        randum = lucky(j);
                        cout << randum << endl;
                        if (output.is_open())
                            output << randum << endl;
                        count15++;
                        }
                    }
                    if(count15 < ENTRIES)
                    {
                    j = last;
                    randum = lucky(j);
                    cout << randum << endl;
                    if (output.is_open())
                            output << randum << endl;
                    count15++;
                    }
                }
            }
    }
    if (input.is_open() && input.eof())
    {
        input.close();
        output.close();
    }
}
return(0);
}

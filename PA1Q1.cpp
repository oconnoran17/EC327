#include <iostream>
#include <iomanip>
#include <string>                                                        
using namespace std;

float let2num(string let)
{
    float num;
    
    if (let == "A" || let == "A+") //list cases
        num = 4.00;		   //assign number grade to letter
    else if (let == "A-")
        num = 3.70;
    else if (let == "B+")
        num = 3.30;
    else if (let == "B")
        num = 3.00;
    else if (let == "B-")
        num = 2.70;
    else if (let == "C+")
        num = 2.30;
    else if (let == "C") 
        num = 2.00;
    else if (let == "C-")
        num = 1.70;
    else if (let == "D")
        num = 1.00;
    else if (let == "F")
        num = 0;
    else{
        cout << "Invalid input!" << endl; //Verify input range
        num = 21.0;}

    return num;
}

string getinput(int course)
{
    string let;
    cout << "Class " << course << ": ";
    cin >> let;
    if(cin.fail()) //Verify input type
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input!" << endl;
			let = "end";
		}
	return let;
}

int main()
{
    int course = 1;
    
    string let1 = getinput(course); //Get letter grade
    if (let1 == "end")		    //check for invalid input
        return 0;
    float num1 = let2num(let1);	    //check for invalid num
    if (num1 == 21.0)
        return 0;
    
    string let2 = getinput(++course); //repeat for each class
    if (let2 == "end")
        return 0;
    float num2 = let2num(let2);
    if (num2 == 21.0)
        return 0;
    
    string let3 = getinput(++course);
    if (let3 == "end")
        return 0;
    float num3 = let2num(let3);
    if (num3 == 21.0)
        return 0;
    
    string let4 = getinput(++course);
    if (let4 == "end")
        return 0;
    float num4 = let2num(let4);
    if (num4 == 21.0)
        return 0;
    
    string let5 = getinput(++course);
    if (let5 == "end")
        return 0;
    float num5 = let2num(let5);
    if (num5 == 21.0)
        return 0;
    
    float grade = (num1+num2+num3+num4+num5)/5.00; //find the mean grade
    
    cout << "GPA: " << fixed << setprecision (2) << grade; 
	//report grade to 2 decimal places
    
return 0;
    
}

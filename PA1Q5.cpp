#include <iostream>
using namespace std;

char flipcase(int let)          //Case 1
{
    int num;
    
    if (let <= 90)              //Check for upper or lower case
        num = (let - 65) + 97;
    else
        num = (let - 97) + 65;  //Change case
        
    cout << num << endl;
    
    char result = char(num);    //Convert to char
    
    return (result);
}


char fliplace(int let)              //Case 2
{
     int num;
     int place;
     char result;
     
     if (let <= 90)                 //Check upper or lower case
        {
         place = let - 65;
         num = 90 - place;          //Swap place value
        }
     else
        {
         place = let - 97;
         num = 122  - place;
        }
    
     result = char(flipcase(num));  //Convert to char
     
     return (result);
    
}


char letshift(int let)          //Case 3
{
   int num = let + 6;           //Shift by 6
   char result;
   
   if (num > 90 && num < 97)    //Check range
        num = (num - 90) + 97;
   else if (num > 122)
        num = (num - 122) + 65; //Correct shift
    
    result = char(num);         //Convert to char    
        
   return(result);
}


int main()
{
    char input;
    int let;
    int op;
    char result;
    
    cout << "Enter char, operation: ";              
    cin >> input;                        //Get input
    let = int(input);                    //Convert to ascii int
    if (let < 65) {                      //Verify Range
		cout << "Invalid input." << endl;
		return(0);
        }
	else if (let > 122) {
	    cout << "Invalid input." << endl;
		return(0); 
	    }
	else if (let > 90 && let < 97) {
	    cout << "Invalid input." << endl;
		return(0);
        }
    while(cin.fail())                   //Verify type
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input." << endl;
			return(0);
		}
		
		
    cin >> op;                          //Get operation
        if (op <1) {                    //Verify range
            cout << "Invalid input." << endl;
			return(0);
            }
        else if (op > 3) {
            cout << "Invalid input." << endl;
			return(0);
            }
        while(cin.fail())               //Verify type
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input." << endl;
			return 0;
		}
    
    if (op == 1)                        //Choose function from op
        result = flipcase(let);
    else if (op == 2)
        result = fliplace(let);
    else
        result = letshift(let);
        
    cout << "Result: " << result << endl;
    
    return(0);
}
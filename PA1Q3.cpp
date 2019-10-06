#include <iostream>
#include <cmath> //math.h
#include <string>                                                        
using namespace std;


string ternit(int input)		//convert to ternary
{
  string base = "00000";
  int num = input;
  int i = 0;
  
  do {
    int remainder = num % 3;		//divide by 3 and keep remainder
    num = num / 3;			
    base[i] = ((char)remainder + '0');
    i++;
  } while(num >= 1 && i < 5);		//100 in ternay has 5 digits
  					                //so loop till i=5
  return base; //will be backwards but it's fine
}

int hamitup(string tern1, string tern2) //calculate hamming distance
{
    int i;
    int count = 0;
    for (i = 0; i < 5; i++) {		//loop through ternary strings
        if (tern1[i] != tern2[i])
            count = ++count;		//add to counter when places not equal
    }
    
    return count;
}


int main() 
{
    int input1, input2;
    cout << "Enter two numbers between 0 and 100: " << endl;
    cin >> input1;
        while(cin.fail() || input1 > 100 || input1 < 0) //Verify input type and range
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input! I said numbers between 0 and 100" << endl;
			cin >> input1;
		}

    cin >> input2;
        while(cin.fail() || input2 > 100 || input2 < 0)  //Verify input type and range
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input! I said numbers between 0 and 100" << endl;
			cin >> input2;
		}

    string tern1 = ternit(input1); //Convert inputs to ternary
    string tern2 = ternit(input2);
    
    int hamval = hamitup(tern1, tern2); //Calculate hamming distance
    cout << "Hamming distance between "<<input1<< " and "<<input2<<" when numbers are in ternary format is "<<hamval<<"."<<endl;
    
    return 0;
    
}
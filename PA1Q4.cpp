#include <iostream>
using namespace std;


int flipit(int num)
{
    int dig;
    int flip = 0;
    do{
        dig = num % 10;
        flip = (flip * 10) + dig;
        num = num / 10;
    } while (num != 0);
    
    return(flip);
}


void checkpal(int num)
{
    int flip = flipit(num);
    
    if (num == flip)
        cout << "The number " << num << " is a palindrome!";
    else
        cout << "The number " << num << " is not a palindrome!";
}


int main()
{
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    while(cin.fail() || num < 0) 
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input! Positive integers only!" << endl;
			cout << "Enter a positive integer: ";
			cin >> num;
		}
    
    checkpal(num);
    
    return(0);
}
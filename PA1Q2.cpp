#include <iostream>
#include <cmath> //math.h
#include <string>                                                        
using namespace std;


int findoverlap(float x1, float y1, float area1, float x2, float y2, float area2)
{
    int val;
    //Width Overlap
    float side1 = sqrt(area1); //find side length
    float x1max = x1 + side1; //find right edge
    float side2 = sqrt(area2);
    float x2max = x2 + side2;
    
    if (x1 <= x2 && x2 <= x1max) //check for overlap in x
        val = 1;
    else if (x2 <= x1 && x1 <= x2max)
        val = 1;
    
    //Height Overlap
    float y1min= y1 - side1; //find bottom edge
    float y2min = y2 - side2;
    
    if (y1 <= y2 && y2 <= y1min) //check for overlap in y
        val = 1;
    else if (y2 <= y1 && y1 <= y2min)
        val = 1;
    
    return val; //positive val == overap
}

int main()
{
    
    cout << "Enter the information for the first square." << endl;
    
    float x1;
    float y1;
    float area1;
    
    cout << "x coordinate: ";
    cin >> x1;
    cout << "y coordinate: ";
    cin >> y1;
    cout << "area: ";
    cin >> area1;
    while(cin.fail() || area1 < 0)  //Verify input type and range
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input! Positive numbers only!" << endl;
			cout << "area: ";
			cin >> area1;
		}
    
    cout << "Enter the information for the second square." << endl;
    
    float x2;
    float y2;
    float area2;
    
    cout << "x coordinate: ";
    cin >> x2;
    cout << "y coordinate: ";
    cin >> y1;
    cout << "area: ";
    cin >> area2;
    while(cin.fail() || area2 < 0) 
		{
			cin.clear(); 
			cin.ignore(); 
			cout << "Invalid input! Positive numbers only!" << endl;
			cout << "area: ";
			cin >> area2;
		}
    
    int val = findoverlap(x1,y1,area1,x2,y2,area2); //positive val == overlap
    
    if (val == 1)
        cout << "THE SQUARES INTERSECT!" << endl;
    else
        cout << "THE SQUARES DO NOT INTERSECT!" << endl;
    
    return 0;
}
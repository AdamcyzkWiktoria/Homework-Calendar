#include <iostream>
int day=0;
int year=0;
int month;

using namespace std;

int main ()
{
    int month,day,year;
    
    cout << "Enter month number" << endl;
    cin >> month;
    cout << "Enter day number" << endl;
    cin >> day;
    cout << "Enter year number" << endl;
    cin >> year;

    if(month == 1)
    {
        cout << "January";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 2)
    {
        cout << "February";
        cout << " ";
        
        if (day >=1 && day <=28)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 3)
    {
        cout << "March";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 4)
    {
        cout << "April";
        cout << " ";
        
        if (day >=1 && day <=30)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 5)
    {
        cout << "May";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 6)
    {
        cout << "June";
        cout << " ";
        
        if (day >=1 && day <=30)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 7)
    {
        cout << "July";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 8)
    {
        cout << "August";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 9)
    {
        cout << "September";
        cout << " ";
        
        if (day >=1 && day <=30)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 10)
    {
        cout << "October";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}		
    }
    else if(month == 11)
    {
        cout << "November";
        cout << " ";
        
        if (day >=1 && day <=30)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    else if(month == 12)
    {
        cout << "December";
        cout << " ";
        
        if (day >=1 && day <=31)
        {
        	cout << day;
        	cout << " ";
		}
		
		else
		{
			cout << "Invalid input!";
		}
    }
    
    else
    {
        cout << "Invalid input!";
    }
    
    if (year >=1738 && year <=2019)
    {
    	cout << year << endl;
	}
	
	else
	{
		cout << "Invalid Input!" << endl;
	}
    
    return 0;
}

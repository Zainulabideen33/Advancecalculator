#include<iostream>
using namespace std;

int main()
{
    int x , y;
    char z;
    
    
    cout << "Enter first value" << endl;
    cin >> x;
    
    cout >> "Enter second value" << endl;
    cin >> y;
    
    cout << "Enter Operator + or - or * or / or  %";
    cin >> z;
    
    if(z== '+')
    cout << "Sum =" << x + y << endl;
    else if(z== '-')
    cout << "Substract =" << x - y << endl;
    
    else if(z== '*')
    cout << "Product =" << x - y << endl;
    
    else if(z== '/')
    cout << "Division =" << x - y << endl;
    
    else
    cout << "WRONG CHOOSE INPUT";

}
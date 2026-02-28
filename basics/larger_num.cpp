#include <iostream>
using namespace std;

int main()
{
    int num1 , num2;
    // display the larger no. on screen
    cout << ("Enter two numbers : ");
    cin >> num1 >> num2;
    
    if ( num1 > num2)
       cout << ("larger number is : ") << num1;
    
    else
       cout << ("larger number is : ") << num2;
    
    return 0;
}
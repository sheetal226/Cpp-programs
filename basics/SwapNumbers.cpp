#include <iostream>
using namespace std;
    void swapNumbers(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int main()
    {
        int x , y;
        
        cout << "Enter two integers : ";
        cin >> x >> y;
        
        cout << "Before swapping:\n ";
        cout << "First number" << x << endl;
        cout << "Second number" << y << endl;
        swapNumbers(x,y);
        
        cout <<"After swapping:\n";
        cout << "First number : " << x << endl;
        cout << "Second number : " << y << endl;
        
    return 0;
}
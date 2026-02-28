#include <iostream>
using namespace std;

    //obtain the largest of 3 numbers.

    #define LARGEST(a,b,c) ((a > b ) ? ((a > c) ? a: c ) : ((b > c )? b : c))
    
    int main()
    {
        
        int A , B , C;
        
        cout << "Enter three numbers : ";
        cin >> A >> B >> C;
        
        cout << "Largesst number = " << LARGEST(A , B , C);
        
    return 0;
}

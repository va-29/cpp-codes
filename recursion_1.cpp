#include <iostream>
using namespace std;

int factorial( int n )
{
    if ( n==0 )
    {
        return 1;
    }
    int smallfact = factorial ( n-1 );
    return n * smallfact;
}


int main()
{
    int n;
    cin >> n;
    int fact = factorial( n );
    cout << fact << endl;
    return 0;
    
}
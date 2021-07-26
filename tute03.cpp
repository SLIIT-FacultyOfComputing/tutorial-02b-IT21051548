#include <iostream>
using namespace std;
int main()
{
    int no;
    long fac;

    cout << "enter the number : ";
    cin >> no;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    cout << "factorial of " << no << "is " << fac << endl;
      
    return 0;
}
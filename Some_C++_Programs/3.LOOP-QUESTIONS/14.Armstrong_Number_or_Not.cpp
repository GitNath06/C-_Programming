#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int rem, arm = 0, n, cpy,cpy2, count = 0;
    cout << endl;
    cout << endl;
    cout << "Enter the Number: ";
    cin >> n;

    cpy = n;
    cpy2=n;
    while (cpy2 != 0)
    {
        cpy2 /= 10;
        count++;
    }

    while (n != 0)
    {

        rem = n % 10;
        arm += pow(rem, count);
        cout<<arm<<endl;
        n /= 10;
    }
    if (cpy == arm)
    {
        cout << arm << " is armstong number.";
    }
    else
    {

        cout << cpy << " is not armstong number.";
    }
}
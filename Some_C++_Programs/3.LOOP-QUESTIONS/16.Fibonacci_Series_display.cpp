#include <iostream>
using namespace std;
int main()
{
    /*    0 1 1 2 3 5 8 13 21 34 .. .. ..
          then
                    tn=t(n-1)+t(n-2);


    */

    int n, t1 = 0, t2 = 1, cpy = 0, nextterm;
    cout << "Enter the number of terms " << endl;
    cin >> n;

    cout << endl
         << endl;
    cout << endl
         << endl;

    cout << t1 << " , " << t2;

    for (int i = 2; i < n; ++i)
    {
        nextterm = t1 + t2;
        cout << " , " << nextterm;
        t1 = t2;
        t2 = nextterm;
    }
    cout << endl
         << endl;
    cout << endl
         << endl;
    return 0;
}
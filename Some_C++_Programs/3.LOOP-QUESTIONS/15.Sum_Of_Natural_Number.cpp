#include <iostream>
using namespace std;
int main()
{

    int n, sum = 0, cpy;

    cout << "Enter the Number Upto get  Sum" << endl;
    cin >> n;
    cpy = n;

    while (n != 0)
    {
        sum += n;
        n--;
    }
    cout << "The sum of the Natural numbers upto " << cpy << " is " << sum;

    return 0;
}
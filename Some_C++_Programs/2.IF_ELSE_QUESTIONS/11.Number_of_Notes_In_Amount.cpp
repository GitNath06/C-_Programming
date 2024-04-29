#include <iostream>
using namespace std;

class note
{
   long long  int th, fh, h, t, f, o;

public:
    void calculate(int a)
    {
        if (a != 0)
        {
            th = a / 1000;
            a = a % 1000;
            cout << "Notes of Thousand is " << th << endl;
        }
        else
        {
            th = 0;
            h = 0;
            fh = 0;
            t = 0;
            f = 0;
            o = 0;
            exit(0);
        }

        if (a != 0)
        {
            fh = a / 500;
            a = a % 500;
            cout << "Notes of Five Hundred is " << fh << endl;
        }
        else
        {

            h = 0;

            t = 0;
            f = 0;
            o = 0;
            exit(0);
        }
        if (a != 0)
        {
            h = a / 100;
            a = a % 100;
            cout << "Notes of Hundred is " << h << endl;
        }
        else
        {

            t = 0;
            f = 0;
            o = 0;
            exit(0);
        }
        if (a != 0)
        {
            t = a / 10;
            a = a % 10;
            cout << "Notes of Ten is " << t << endl;
        }
        else
        {
            f = 0;
            o = 0;
            exit(0);
        }
        if (a != 0)
        {
            f = a / 5;
            a = a % 5;
            cout << "Notes of five is " << f << endl;
        }
        else
        {
            o = 0;
        }
        if (a != 0)
        {
            o = a / 1;
            a = a % 1;
            cout << "Notes of one is " << o << endl;
        }
        else
        {
            exit(0);
        }
    }
};

int main()
{
    note amt;
   long long int n;
    cout << "Enter the Amount: ";
    cin >> n;

    amt.calculate(n);
    return 0;
};
#include <iostream>
#include <math.h>
using namespace std;
class Area
{
private:
public:
    int rat(int x, int y)
    {
        cout << endl
             << "The area of triangle is " << 0.5 * x * y;

        cout << endl;
    }

    int eqt(int x)
    {
        cout << endl
             << "The area of triangle is " << ((sqrt(3)) / 4) * x * x;

        cout << endl;
    }

    int isc(int x, int y)
    {
        cout << endl
             << "The area of triangle is " << (y / 4) * sqrt(4*x*x - y*y);

        cout << endl;
    }
    int slc(int x, int y, int z)
    {
        int s;
        s = (x + y + z) / 2;
        cout << endl
             << "The area of triangle is " << sqrt(s * (s - x) * (s - y) * (s - z));

        cout << endl;
    }
};
int main()
{
    Area triangle;
    int ch;
    int a, b, h, c, s;

    cout << "Enter your choice:" << endl
         << "\n 1.Right Angled Triangle \n 2.Equilateral Triangle \n 3.Isosceles Triangle \n 4.Scalence Triangle " << endl<< endl;
    cin >> ch;

    switch (ch)
    {

    case 1:
    {
        cout << "Enter the Height  and Base of the Triangle: ";
        cin >> h >> b;
        triangle.rat(h, b);
        break;
    }
    case 2:
    {
        cout << "Enter the side of Triangle:";
        cin >> a;
        triangle.eqt(a);
        break;
    }
    case 3:
    {
        cout << "Enter the two side of the Triangle:";
        cin >> a >> b;
        triangle.isc(a, b);
        break;
    }
    case 4:
    {
        cout << "Enter the three side of the Triangle:";
        cin >> a >> b >> c;
        triangle.slc(a, b, c);
        break;
    }
    default:{
        cout<<"Invalid"<<endl;
        break;
    }
    }


    return 0;
}
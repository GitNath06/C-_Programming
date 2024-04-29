#include <iostream>
using namespace std;
class area
{
    const float pi = 3.1415;
    float r, A, C;

public:
    void getdata()
    {
        cout << "Enter the Radius of the circle : ";
        cin >> r;

        cout<<endl;
    }
    void operation()
    {
        A = pi * r * r;
        C = 2 * pi * r;
    }
    void output()
    {
        cout << "The Area of the circle is " << A << endl;
        cout << "The Circumference of the Circle is " << C << endl;
    }
};
int main()
{
    area circle;
    circle.getdata();
    circle.operation();
    circle.output();

    return 0;

}

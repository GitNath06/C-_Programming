

// Generic root of a number is the sum of all the digits of a given number until we get a single digit output.For example,
//                   if a number is 428, then it's generic root will be

//                 4 + 2 + 8 = 14,
//         then
//                 1 + 4 = 5

#include <iostream>
using namespace std;

int main()
{

    int temp, n, rem, sum = 0;
    cout << "Enter the Number: ";
    cin >> n;
    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;

        if (temp == 0)
        {
            if (sum > 9)
            {
                temp = sum;
                sum = 0;
            }
        }
    }
  
  cout<<"The Generic root of "<<n<<" is "<<sum;
    return 0;
}

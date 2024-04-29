#include <iostream>
using namespace std;
int main()
{
    int n, ch, nterm;

    cout << "Enter the number of terms:";
    cin >> n;
    cout << "Which term do you want:" << endl;
    cin >> ch;
    n = n - 1;
    int sq[n], sq2[n - 1], sq3[n - 2], diff,diff2, x1, x2;

    cout << "Enter the terms:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> sq[i];
    }

    // displaying the sequence:

    cout << "The sequence is: " << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << sq[i] << endl;
    };



    cout << endl
         << endl;


    for (int i = 0; i <= n - 1; i++)
    {
        sq2[i] = sq[i + 1] - sq[i];
    }

    // displaying second sequence
    cout << "The second sequence is: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << sq2[i] << endl;
    }

    cout << endl
         << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        if (sq2[i] == sq2[i + 1])
        {
            diff = sq2[i];

            cout<<"It is linear sequence"<<endl;

            ;
        }
        else
        {
            diff = 0;
        }
    }
    cout << endl<< endl<< endl<< endl;


    cout << "The first difference is " << diff << endl;

   cout << endl<< endl<< endl<< endl;

    // obtaining the third sequence
    if (diff == 0)
    {
        for (int i = 0; i <= n - 2; i++)
        {
            sq3[i] = sq2[i + 1] - sq2[i];
        }
        // displaying third sequence
        cout << "The third sequence is: " << endl;
        for (int i = 0; i <= n - 2; i++)
        {
            cout << sq3[i] << endl;
        }
    } 
    for (int i=0; i<= n-2; i++ ){

        if (sq3[i] == sq[i+1]){
            diff2= sq3[i];
        }
        else {
            diff2 =0;
        }
    }
    cout << endl<< endl<< endl<< endl;
    
    cout << "The second difference is " <<diff2 ;


    cout << endl<< endl<< endl<< endl;

    if (diff != 0)
    //if true-- it is a linear sq 
    {
        nterm = sq[0] + (ch - 1) * diff;
        cout << "The  " << ch << "th term is " << nterm;
    }
    int a = sq[0] + (( a - 1) * diff);
    cout << "the nth term is " << a;

    cout << endl<< endl<< endl<< endl;
    return 0;
} 
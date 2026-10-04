#include <bits/stdc++.h>
using namespace std;



void pattern(int n)
{
    // upper part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // spaces

        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
    
     // 2nd part

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

        // lower part

        for (int i = n ; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }

            // spaces

            int spaces = 2 * (n - i);
            for (int j = 1; j <= spaces; j++)
            {
                cout << " ";
            }

            // 2nd part

            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}
#include <iostream>
using namespace std;
int main()
{
    int m, d;
    cin >> m >> d;
    int list = 0;
    if(m >= 1 && m <= 12)
    {
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if(d < 1 || d > 31)
            {
                cout << "Not correct";
                return 0;
            }
        }
        else if(m == 2)
        {
            if(d < 1 || d > 28)
            {
                cout << "Not correct";
                return 0;
            }
        }
        else
        {
            if(d < 1 || d > 30)
            {
                cout << "Not correct";
                return 0;
            }
        }
        for(int i = 1; i < m; i++)
        {
            if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            {
                list += 31;
            }
            else if(i == 2)
            {
                list += 28;
            }
            else
            {
                list += 30;
            }
        }
        list += d;
        cout << 365 - list + 1;
    }
    else
    {
        cout << "Not correct";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[10], y[10][10];
    int n;
    cout << "Enter the number of value: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << endl << "Enter X" << i+1 << ": ";
        cin >> x[i];
        cout << "Enter Y" << i+1 << ": ";
        cin >> y[i][0];
    }
    for(int j=1; j<n; j++)
    {
        for(int i=0; i<(n-j); i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    cout << endl;
    cout<<"---Difference Table---"<<endl;
    for(int i=0; i<n; i++)
    {
        cout << "\t" << x[i];
        for(int j=0; j<(n-i); j++)
            cout << "\t" << y[i][j];
        cout << endl;
    }
    cout << endl;
    float X1, p, u, Y1;
    int fact=1, h;
    cout << "Enter x(not): ";
    cin >> X1;
    h = x[1]-x[0];
    p = (X1-x[0])/h;
    cout << "P: "<<p;
    int Y2 = y[0][0];
    Y1 = 0;
    u = p;
    for(int i=2;i<=n;i++)
    {
        Y1=Y1+(u*y[0][i-1])/fact;
        fact=fact*i;
        u=u*(p-(i-1));
        cout << endl << u;
    }

    Y1 = Y2+Y1;
    cout << endl << "Y("<< X1 <<"): " << Y1 << endl;
}

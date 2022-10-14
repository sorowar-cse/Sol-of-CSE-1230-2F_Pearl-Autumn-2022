#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Author: Cholo Programming Shikhi
int main()
{
    long long int a, b, c, d;
    while(1)
    {
        cin >> a >> b >> c >> d;
        if(a==0 and b==0 and c==0 and d==0)
            return 0;
        else
        {
            long long int r1= a*b;
            long long int r2= c*d;

            if(r1>r2)
                cout << "First rectangle is larger" << endl;
            else if(r2>r1)
                cout << "Second rectangle is larger" << endl;
            else
                cout << "Same rectangle" << endl;
        }
    }


}

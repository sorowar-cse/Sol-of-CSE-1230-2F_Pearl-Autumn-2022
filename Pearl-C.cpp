#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Author: Cholo Programming Shikhi

int isEvilNumber(int n)
{

    int count = 0;
    while (n != 0)
    {
        int r = n % 2;
        if(r == 1)
            count++;
        n = n / 2;
    }

    if (count % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    long long int TC, a;
    cin >> TC;
    for(int i= 1; i<=TC; i++)
    {
        cin >> a;
        int ans= isEvilNumber(a);
        if(ans==1)
            cout << "Case " << i << ": " << a << " is an Evil number." << endl;
        else
            cout << "Case " << i << ": " << a << " is an Odious number." << endl;
    }

    return 0;
}

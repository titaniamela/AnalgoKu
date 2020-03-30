/*
Nama    : Shania Salsabila
Kelas   : B
NPM     : 140810180014
Nama program : tilling
*/

#include <bits/stdc++.h>
using namespace std;

int countWays(int n, int m)
{
    int count[n + 1];
    count[0] = 0;

    // Fill the table upto value n
    for (int i = 1; i <= n; i++) {
        // recurrence relation
        if (i > m)
            count[i] = count[i - 1] + count[i - m];

        // base cases
        else if (i < m)
            count[i] = 1;

        // i = = m
        else
            count[i] = 2;
    }

    // required number of ways
    return count[n];
}

int main()
{
    int n = 4, m = 2;
    cout << "Number of ways = "
         << countWays(n, m);
    return 0;
}


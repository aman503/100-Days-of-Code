#include <bits/stdc++.h>
using namespace std;
 
void check(int n, int m)
{
    if (n == 2 || m == 2 || n % m == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
int main()
{
    int m = 3, n = 9;
    check(n, m);
 
    return 0;
}

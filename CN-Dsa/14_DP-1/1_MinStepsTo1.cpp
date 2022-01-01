#include <bits/stdc++.h>
using namespace std;

int countMinStepsToOne(int n)
{
    // Write your code here
    if (n == 1)
        return 0;
    int x, y = INT_MAX, z = INT_MAX;

    x = countMinStepsToOne(n - 1);
    if (n % 2 == 0)
        y = countMinStepsToOne(n / 2);
    if (n % 3 == 0)
        z = countMinStepsToOne(n / 3);
    int ans = min(x, min(y, z)) + 1;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countMinStepsToOne(n);
}
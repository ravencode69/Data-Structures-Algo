#include <bits/stdc++.h>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k)
{
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int count2 = mp[key + k];
        count += count2;
        if (k != 0)
        {
            int count3 = mp[key - k];
            count += count3;
        }
        mp[key]++;
    }
    return count;
}

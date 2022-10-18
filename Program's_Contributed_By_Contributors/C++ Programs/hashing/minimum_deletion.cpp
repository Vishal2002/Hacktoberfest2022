#include<bits/stdc++.h>
using namespace std;

int minimum_deletion(int arr[], int n)
{

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
 
    // Find maximum frequency among all frequencies.
    int max_freq = INT_MIN;
    for (auto itr = freq.begin(); itr != freq.end(); itr++)
        max_freq = max(max_freq, itr->second);
 
    // To minimize delete operations, we remove all
    // elements but the most frequent element.
    return n - max_freq;
}
 
int main()
{
    int arr[] = { 4, 3, 4, 4, 2, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minimum_deletion(arr, n);
    return 0;
}


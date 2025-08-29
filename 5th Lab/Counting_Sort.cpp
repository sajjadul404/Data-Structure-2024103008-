#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Output[n];

    int Max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
    }
    int Count[Max + 1];
    for (int i = 0; i < Max + 1; i++)
    {
        Count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        Count[arr[i]]++;
    }
    for (int i = 1; i <= Max; i++)
    {
        Count[i] += Count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        Output[Count[arr[i]] - 1] = arr[i];
        Count[arr[i]]--;
    }

    cout << "The Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Output[i] << " ";
    }

    return 0;
}
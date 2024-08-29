#include <iostream>
using namespace std;
int robber(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int prev2 = 0;
    int prev1 = arr[0];

    for (int i = 1; i < n; i++)
    {
        int curr = max(prev1, prev2 + arr[i]);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main()
{
    int arr[5] = {1, 4, 2, 3, 5};
    int n = 5;
    cout << robber(arr, n);
    return 0;
}
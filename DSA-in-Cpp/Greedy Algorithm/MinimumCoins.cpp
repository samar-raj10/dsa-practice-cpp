// 🔥 Problem: Minimum Number of Coins
// 🧠 Logic: Greedy Algorithm
// 🛠️ Source: Coding Ninjas

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the amount: ";
    cin >> n;

    vector<int> curr = {1, 2, 5, 10, 20, 50, 100, 500, 1000}; // Predefined denominations
    int m = curr.size();
    vector<int> a;

    while (n > 0)
    {
        // Binary search to find the largest denomination less than or equal to n
        int ans;
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (curr[mid] <= n)
            {
                ans = curr[mid];
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }

        a.push_back(ans); // Add the denomination to the result

        n = n - ans;
    }

    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
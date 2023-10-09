#include <bits/stdc++.h>
using namespace std;

// Function to convert N
// into indian currency
string goodFormat(string s, int n)
{

    // If length if less than 3
    if (n <= 3)
        return "Rs. " + s;

    string ans = "";
    int start = 0, cnt = 0;

    // If length is even
    if (n % 2 == 0) {
        ans += s[0];
        ans += ", ";
        start = 1;
    }
    while (start < n - 2) {
        if (cnt == 2) {
            ans += ", ";
            cnt = 0;
            continue;
        }
        else {
            ans += s[start];
            cnt++;
        }
        start++;
    }
    for (int i = start; i < n; i++)
        ans += s[i];

    return "Rs " + ans;
}

// Drivers code
int main()
{
    string s = "1000000";
    int l = s.length();

    // Function Call
    cout << goodFormat(s, l);
    return 0;
}

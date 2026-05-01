#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x % 10 == 0 && x != 0)
            return false;

        int reversedHalf = 0;

        while (x > reversedHalf)
        {
            int digit = x % 10;
            reversedHalf = reversedHalf * 10 + digit;
            x /= 10;
        }

        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};

int main()
{
    Solution obj;

    int x = 121;

    bool ans = obj.isPalindrome(x);

    if (ans)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
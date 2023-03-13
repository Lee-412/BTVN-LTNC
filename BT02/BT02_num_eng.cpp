#include <bits/stdc++.h>
using namespace std;

vector<string> nums = {"negative", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty-", "thirty-", "forty-", "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"};

string read_3_digits(int n) {
    string res;
    if (n >= 100) {
        res += nums[n / 100] + " hundred ";
        n %= 100;
        if (n<10) res += " and";
    }
    if (n >= 20) {
        res += nums[20 + n / 10 - 2];
        n %= 10;
        if (n<10) res += "";
    }
    if (n > 0) res += nums[n];
    return res;
}

string read_integer(int n) {
    string s;
    s="zero";
    if (n == 0) return s;
    if (n < 0) return nums[0] + " " + read_integer(-n);
    string res;
    if (n >= 1000000) {
        res = read_3_digits(n / 1000000) + " million ";
        n %= 1000000;
        if (n>100) res += "";
    }
    if (n >= 1000) {
        res += read_3_digits(n / 1000) + " thousand ";
        n %= 1000;
        if (n>100) res += "";
    }
    res += read_3_digits(n);
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << read_integer(n) << endl;
    return 0;
}

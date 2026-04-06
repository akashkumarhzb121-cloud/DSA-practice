class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string t=s;
        reverse(t.begin(), t.end());
        return s == t;
    }
};
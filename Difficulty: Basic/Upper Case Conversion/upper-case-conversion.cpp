class Solution {
  public:
    string convert(string& s) {
        for (int i = 0; i < s.length(); i++) {
            // Capitalize if it's the first char OR the char after a space
            if (i == 0 || s[i - 1] == ' ') {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]); // Ensure other letters are lowercase
            }
        }
        return s;
    }
};

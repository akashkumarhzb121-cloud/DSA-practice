class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp = "";

        for (char c : s) {
            if (c == ' ') {
                int pos = temp.back() - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
            } else {
                temp += c;
            }
        }

        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;

        string result = "";

        for (int i = 1; i < 10; i++) {
            if (ans[i] != "") {
                if (result != "") {
                    result += " ";
                }
                result += ans[i];
            }
        }

        return result;
    }
};
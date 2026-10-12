class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);
        string currentWord = "";
        int wordCount = 0;
        
        for (char c : s) {
            if(c == ' ') {
                continue; 
            } 
            else if(isdigit(c)) {
                int pos = c - '0'; 
                words[pos] = currentWord;
                currentWord = ""; 
                wordCount++;
            } 
            else{
                currentWord += c;
            }
        }
        string result = "";
        for(int i=1; i<=wordCount; ++i) {
            result += words[i];
            if(i<wordCount) {
                result += " ";
            }
        }   
        return result;        
    }
};
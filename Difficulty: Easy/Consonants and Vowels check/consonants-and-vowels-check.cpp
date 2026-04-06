void checkString(string s) {
    int v = 0;
    int c = 0;

    for(size_t i = 0; i < s.length(); ++i){
        char ch = s[i];
        
        // Skip spaces
        if (ch == ' ') continue; 

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            v++;
        } else if (ch >= 'a' && ch <= 'z') {
            // Only count as a consonant if it's a letter
            c++;
        }
    }

    if (v > c) cout << "Yes";
    else if (c > v) cout << "No";
    else cout << "Same";

    cout << endl;
}

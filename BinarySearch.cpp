/*int toInt(string s) {
    int ans = 0;
    for (int i = 0; i < s.size(); i += 1) {
        ans = (ans * 10 + (s[i] - '0'));
    }
    return ans;
}
int get(int a, int b, char op) {
    if (op == '+') {
        return a + b;
    } else if (op == '-') {
        return a - b;
    } else if (op == '*') {
        return a * b;
    } else {
        return a / b;
    }
}
string mathChallenge(string s) {
    string n1 = "", n2 = "", n3 = "", curr = "";
    char op;
    for (int i = 0; i < s.size(); i += 1) {
        if (s[i] == ' ') {
            if (n1 == "") {
                n1 = curr;
                op = s[i + 1];
                i += 2;
                curr = "";
            } else {
                n2 = curr;
                curr = "";
                i += 2;
            }
        } else {
            curr += s[i];  
        }
    }
    n3 = curr;
    int idx1 = -1, idx2 = -1;
    for (int i = 0; i < n1.size(); i += 1) {
        if (n1[i] == '?') {
            idx1 = i;
            break;
        }
    }
    for (int i = 0; i < n3.size(); i += 1) {
        if (n3[i] == '?') {
            idx2 = i;
            break;
        }
    }
    string ans = "";
    for (char c = '0'; c <= '9'; c += 1) {
        for (char p = '0'; p <= '9'; p += 1) {
            if (idx1 != -1) {
                n1[idx1] = c;
            }
            if (idx2 != -1) {
                n3[idx2] = p;
            }
            int val1 = toInt(n1), val2 = toInt(n2), val3 = toInt(n3);
            if (get(val1, val2, op) == val3) {
                ans += c;
                ans += ' ';
                ans += p;
                return ans;
            }
        }
    }
    return ans;
}*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    // for base case
    if (strs.empty())
     return "";
    string ans = "";
    for (int i = 0; i < strs[0].length(); i++) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].length() || strs[j][i] != c) {
                return ans;
            }
        }
        ans += c;
    }
    return ans;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"}; // Example vector of strings
    string result = longestCommonPrefix(strs);
    cout << "Longest common prefix: " << result << endl;
    return 0;
}

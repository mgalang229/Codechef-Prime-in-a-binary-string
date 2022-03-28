#include <bits/stdc++.h>

void perform_test() {
	string s;
	cin >> s;
	// the answer always exists as long as the binary representations
	// of 2 and 3 are present in the given string
	bool checker = false;
	for(int i = 0; i < (int) s.size(); i++) {
		string temp = s.substr(i, 2);
		checker |= (temp == "10" || temp == "11");
	}
	cout << (checker ? "Yes" : "No") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}

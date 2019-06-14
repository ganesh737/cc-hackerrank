#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
	for(int lineno=n; lineno > 0; lineno--) {
		for(int spaces = lineno - 1; spaces > 0; spaces--) {
			cout << " ";
		}
		for(int hashes = n - lineno + 1; hashes > 0; hashes--) {
			cout << "#";
		}
		cout << endl;
	}
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

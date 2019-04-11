#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
	int sum_pri_dia = 0;
	int sum_sec_dia = 0;
	int max_size = arr.size() - 1;
	for(int i = 0; i < arr.size(); i++) {
		sum_pri_dia += arr[i][i];
		sum_sec_dia += arr[i][max_size - i];
	}
	int diff = sum_pri_dia - sum_sec_dia;
	diff = (diff > 0) ? diff : -diff;
	return diff;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

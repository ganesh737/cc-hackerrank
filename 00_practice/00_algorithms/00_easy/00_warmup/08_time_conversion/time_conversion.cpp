#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string ampm = s.substr(s.size() - 2);
    if (0 == strcmp(ampm.c_str(), "PM")) {
        int hour = stoi(s.substr(0, 2));
        int offset = (hour != 12) ? 12 : 0;
        hour += offset;
        s = to_string(hour) + s.substr(2, s.size() - 4);
    }
    else {
        int hour = stoi(s.substr(0, 2));
        hour %= 12;
        string hh = (hour == 0) ? "00" : s.substr(0, 2);
        s = hh + s.substr(2, s.size() - 4);
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string num2str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // Write Your Code Here
    if(n <= 9)
        cout << num2str[n] << endl;
    else
        cout << "Greater than 9" << endl;

    return 0;
}

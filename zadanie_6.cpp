#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter N:" << endl;
    int N;
    cin >> N;
    for (int i = N; i > 0; i = i - 2) {
        for (int j = 1; j <= (N - i) / 2; j++) {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        for (int j = 1; j <= (N - i) / 2; j++) {
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
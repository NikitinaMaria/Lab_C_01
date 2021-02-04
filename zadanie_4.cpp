#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter N:" << endl;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}

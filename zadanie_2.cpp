#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter the length of the first leg:" << endl;
    int x;
    cout << "Enter Enter the length of the second leg:" << endl;
    int y;
    cin >> x >> y;
    cout << sqrt(x*x + y*y) << endl;
    return 0;
}

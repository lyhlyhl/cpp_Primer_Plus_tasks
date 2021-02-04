#include "iostream"

using namespace std;

int main()
{
    int sum = 0, inputNum;
    while (1)
    {
        cout << "Please input a num:";
        cin >> inputNum;
        if (inputNum == 0)
        {
            cout << "The program is end";
            break;
        }
        sum += inputNum;
        cout << "All the num sum is " << sum << endl;
    }
    return 0;
}
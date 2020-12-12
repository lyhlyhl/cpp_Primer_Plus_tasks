#include "iostream"

using namespace std;

int main()
{
    int inputNum, sum = 0;
    do
    {
        cout << "Please input a num:";
        cin >> inputNum;
        sum += inputNum;
        cout << "All nums sum is " << sum << endl;
    } while (inputNum);

    return 0;
}
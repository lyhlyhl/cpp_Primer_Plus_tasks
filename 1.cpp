#include "iostream"

using namespace std;

int main()
{
    int num1, num2;
    cout << "Please input two nums:";
    cin >> num1 >> num2;
    int sum = 0;
    for (int i = num1; i < num2 + 1; i++)
    {
        sum += i;
    }
    cout << sum;
    cin.get();
    return 0;
}
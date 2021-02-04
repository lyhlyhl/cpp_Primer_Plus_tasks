#include "iostream"

using namespace std;

int main()
{
    cout << "Please input first number:";
    int num1, num2;
    cin >> num1;
    cout << "Please input second number:";
    cin >> num2;
    if (num1 > num2)
    {
        swap(num1, num2);
    }
    int sum = 0;
    for (int i = num1; i <= num2; i++)
    {
        sum += i;
    }
    cout << "The result is " << sum << endl;

    return 0;
}
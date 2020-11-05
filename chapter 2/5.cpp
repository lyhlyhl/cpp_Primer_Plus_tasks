#include <iostream>

using namespace std;
float tempTransform(float temp);
int main()
{
    float temp;
    cout << "Please enter a Celsius value:";
    cin >> temp;
    cout << temp << " degrees Celsius is " << tempTransform(temp) << " degrees Fahrenheit.";
    cin.get();
    cin.get();
}

float tempTransform(float temp)
{
    return 1.8 * temp + 32.0;
}
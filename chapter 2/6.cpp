#include "iostream"

using namespace std;
double distanceTransform(double years);
int main()
{
    cout << "Enter the number of light years: ";
    double years;
    cin >> years;
    cout << years << " light years = " << distanceTransform(years) << " astronomical units" << endl;
    cin.get();
    cin.get();
}
double distanceTransform(double years)
{
    return years * 63240;
}
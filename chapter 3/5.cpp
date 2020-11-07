#include "iostream"

using namespace std;

int main()
{
    long long us_population;
    long double all_population;
    //in this case,if the type of all nums is long long,the result of division will not be floating number
    cout << "Enter the world's population: ";
    cin >> all_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    double percentOfALL;
    percentOfALL = us_population / all_population;
    //the result will be zero
    cout << "The population of the US is " << percentOfALL * 100 << "% of the world population." << endl;
    cin.get();
    cin.get();
    return 0;
}
#include "iostream"

using namespace std;

int main()
{
    int i = 0;
    float Dgain = 100, Cgain = 100;
    while (Cgain <= Dgain)
    {
        i++;
        Dgain += 10;
        Cgain += Cgain * 0.05;
    }
    cout << "Cleo money is " << Cgain << endl;
    cout << "Dgain money is " << Dgain << endl;
    cout << "It has been " << i << " years passed" << endl;
    return 0;
}
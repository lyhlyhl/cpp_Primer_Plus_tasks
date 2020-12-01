#include "iostream"
#include "string"

using namespace std;

int main()
{
    string first_name, last_name, name;

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    name = first_name + ", " + last_name;
    cout << "Here's the information in a single string: " << name << endl;

    cin.get();
    cin.get();
    return 0;
}
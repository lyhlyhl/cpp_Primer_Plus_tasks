#include "iostream"
#include "cstring"
using namespace std;

int main()
{
    char first_name[20], last_name[20], name[40];

    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    strcpy(name, first_name);
    strcat(name, ", ");
    strcat(name, last_name);
    cout << "Here's the information in a single string: " << name << endl;

    cin.get();
    cin.get();
    return 0;
}
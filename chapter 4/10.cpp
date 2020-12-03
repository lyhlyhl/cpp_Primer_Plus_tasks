#include "iostream"
#include "array"

using namespace std;

int main()
{
    array<int, 3> grade;
    cout << "Please input your first running grade: ";
    cin >> grade.at(0);
    cout << "Please input your second running grade:";
    cin >> grade.at(1);
    cout << "Please input your last running grade:";
    cin >> grade.at(2);

    double averageGrade = (grade[0] + grade[1] + grade[2]) / 3;
    cout << "averageGrade is : " << averageGrade << endl;
    cout << "Times is " << grade.size() << endl;

    return 0
}
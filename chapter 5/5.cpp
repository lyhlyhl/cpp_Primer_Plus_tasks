#include "iostream"

using namespace std;

const string months[12] = {"一月", "二月", "三月", "四月", "五月", "六月", "七月",
                           "八月", "九月", "十月", "十一月", "十二月"};
int main()
{
    int sellNum[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "请输入" << months[i] << "销售额:";
        cin >> sellNum[i];
    }
    for (int i = 0; i < 12; i++)
    {
        cout << months[i] << "销售额是" << sellNum[i] << endl;
    }
    return 0;
}
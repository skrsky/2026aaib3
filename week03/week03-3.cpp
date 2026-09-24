/// week03-3.cpp 今天的主題C++陣列
#include <iostream>
#include <vector> ///本周主題vector 陣列
using namespace std;

int main()
{
    vector<int> a; /// C++伸縮自如的陣列
    a.push_back(99); ///把99塞到陣列後面
    a.push_back(88); ///把88塞到陣列後面
    a.push_back(77); ///把77塞到陣列後面
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";

    a.push_back(88); ///把88塞到陣列後面
    a.push_back(77); ///把77塞到陣列後面
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";
}

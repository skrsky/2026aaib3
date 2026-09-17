//week02-2.cpp 要使用命名空間
#include <iostream> ///上週教的
#include <string> ///第02周教的
using namespace std;///使用std命名空間
int main()
{
    cout <<"請問你叫甚麼名字啊? ";
    string name; ///宣告字串 name
    cin >> name; ///上週教cin原來長這樣
    cout << name << "你好，今天教命名空間喔!";
}

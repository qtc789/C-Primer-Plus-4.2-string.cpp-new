// 4.2 string.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>

int main()
{using namespace std;
const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    cout << "Howdy! I am  " << name2;
    cout << "! what is your name?\n";
    cin >> name1;
    cout << "WEll," << name1 << ",your name has  ";
    cout << strlen(name1) << "  letters and is stored\n";
    cout << "in an array of   " << sizeof(name1) << "  bytes.\n";
    cout << "your initial is   " << name1[0] << endl;
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name;   ";
    cout << name2 << endl;
    

}

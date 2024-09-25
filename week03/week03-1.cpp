//因為range-based for 迴圈 必須在c++11(2011之後)才能用
//如果使用C++98(1998年版C++)會無法正確編譯執行會出錯
//settings-compiler 勾第二個
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c:s){
		if(c!='2') cout<<c;
	}
	cout<<endl;
}

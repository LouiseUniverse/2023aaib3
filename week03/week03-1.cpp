//�]��range-based for �j�� �����bc++11(2011����)�~���
//�p�G�ϥ�C++98(1998�~��C++)�|�L�k���T�sĶ����|�X��
//settings-compiler �ĲĤG��
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

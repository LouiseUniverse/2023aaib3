#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b){
		while(a>0){
		cout << a << " ";
		if(a%b>0) bad = 1;
		a = a/b;
		}
		cout << "Boring!\n";
	}
}

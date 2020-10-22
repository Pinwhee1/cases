#include <iostream>
#include "cases.cpp"
using namespace std;

int main(){
	string s;
	char c;
	cin>>s>>c;
	cout<<cases::isUpper(s)<<endl;
	cout<<cases::isUpper(c)<<endl;
    system("pause");return 0;
}
#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	char b='A';
	char &c=b;
	int *x=&a;
	char *y=&c;
	int **z=&x;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<x<<"\n"<<(void *)y<<"\n"<<z<<"\n\n";
	cout<<&a<<(void *)b<<(void *)c<<&x<<&y<<&z<<"\n\n";
	c='F';
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<x<<"\n"<<(void *)y<<"\n"<<z<<"\n\n";
	*y='W';
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<x<<"\n"<<(void *)y<<"\n"<<z<<"\n\n";
	*x=6;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<x<<"\n"<<(void *)y<<"\n"<<z<<"\n\n";
	**z=7;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<x<<"\n"<<(void *)y<<"\n"<<z<<"\n\n";
	return 0;
}

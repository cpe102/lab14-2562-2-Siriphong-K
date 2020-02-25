#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	srand(time(0));	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &x,int &y, int &c, int &z){
	int A=rand()%4+1;
	for(int i=0;i<A;i++){
		int o=x;
		x=y;
		y=c;
		c=z;
		z=o;
			for(int i=0;i<A;i++){
			int o=x;
			x=y;
			y=c;
			c=z;
		 	z=o;
		}
	}
}

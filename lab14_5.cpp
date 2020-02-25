#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	int *A=&a;
	int *B=&b;
	int *C=&c;
	int *D=&d;
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(A,B,C,D); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *x,int *y, int *z, int *c){
		int A=rand()%4+1;
	for(int i=0;i<A;i++){
		int o=*x;
		*x=*y;
		*y=*c;
		*c=*z;
		*z=o;
			for(int i=0;i<A;i++){
			int o=*x;
			*x=*y;
			*y=*c;
			*c=*z;
		 	*z=o;
		}
	}
}

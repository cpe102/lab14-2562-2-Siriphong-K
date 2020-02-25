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
void shuffle(int *a,int *b, int *c, int *d){
	int N=0;
	int G[]={*a,*b,*c,*d};
while(N<10){
	int B=rand()%4;
	int A=rand()%4;
	for(int i=0;i<A;i++){
		int o=G[A];
		G[A]=G[B];
		G[B]=o;

	}
	N++;	
}
*a=G[0];
*b=G[1];
*c=G[2];
*d=G[3];
}

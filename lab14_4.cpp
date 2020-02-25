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
void shuffle(int &a,int &b, int &c, int &d){
	int N=0;

	int *G[]={&a,&b,&c,&d};
while(N<10){
	int B=rand()%4;
	int A=rand()%4;
	for(int i=0;i<A;i++){
		int o=*G[A];
		*G[A]=*G[B];
		*G[B]=o;
	}
	N++;	
}

}

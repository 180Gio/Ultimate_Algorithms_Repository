#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num,sq_num;
	cout<<"Insert a number.\n";
	cin>>num;
	sq_num=sqrt(num);
	if(sq_num*sq_num==num){
		cout<<"Perfect square.";
	}
	else{
		cout<<"Not a perfect square.";
	}
}

#include <iostream>
using namespace std;

int max(int a, int b, int c){
	if (a>b)
		if (a>c)
			return a;
		else
			return c;
	else
		if (b>c)
			return b;
		else
			return c;
}
int main(){
	int a, b, c;
	cout<<"Nhap a: "; cin>>a;	
	cout<<"Nhap b: "; cin>>b;
	cout<<"Nhap c: "; cin>>c;
	cout<<"So lon nhat la: "<<max(a, b, c);
}
#include <iostream>
#include <math.h>
const float pi=3.14;
using namespace std;

int main(){
	int x;
	cout<<"Nhap ban kinh r: "; cin>>x;
	float Chuvi; Chuvi=2*pi*x;
	cout<<"Chu vi hinh tron la: "<<Chuvi;
	float Dientich; Dientich=Chuvi*x;
	cout<<"\nDien tich hinh tron la: "<<Dientich;
}
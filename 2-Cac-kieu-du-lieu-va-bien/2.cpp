#include <iostream>
using namespace std;

int main(){
	int x, y;
	cout<<"Nhap x: "; cin>>x;
	cout<<"Nhap y: "; cin>>y;
	cout<<"\nGia tri a va b truoc khi trao doi la :"<<x<<" va "<<y;
	swap(x, y);
	cout<<"\nGia tri a va b sau khi trao doi la :"<<x<<" va "<<y;
}
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n: "; cin>>n;
	int Giaithua=1;
	for (int i=1; i<=n; i++){
		Giaithua*=i;
	}
	cout<<"Giai thua cua "<<n<<" la:"<<Giaithua<<endl;
	return 0;
}
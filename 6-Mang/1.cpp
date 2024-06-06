#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Nhap cac phan tu: "<< endl;
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Mang sau khi nhap: "<<endl;
    for (int i=0; i<5; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}
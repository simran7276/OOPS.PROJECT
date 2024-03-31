#include<iostream>
using namespace std;
class number{
 public:
 int n;
 int a[100];
 int count = 0;

 number(){
 cout << "Enter Decimal value: ";
 cin >> n;
 }
 void calc(){
 for(int i = 0;n>0;i++){
 a[i] = n%2;
 n = n/2;
 count++;
 }

 cout << "Binary form: ";
 for(int j = count - 1;j >= 0;j--){
 cout << a[j];
 }
 }
};
int main(){
 number obj;
 obj.calc();
}
#include<iostream>
using namespace std;
int main(){
 int n,tsum=0,sum=0;
 l1:{
 cout << "Enter a number: ";
 cin >> n;
 if(n <= 0){
 cout << "Wrong input! Please enter correct value." << endl;
 goto l1;
 }}
 for(int i = 1;i<=n;i++){
 sum = sum+i;
 tsum = tsum+sum;
 }
 cout << tsum << endl;
 return 0;
}
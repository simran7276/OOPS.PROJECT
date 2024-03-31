#include<iostream>
using namespace std; 
class valid{
 int num, count = 0;
 public:
 valid(){
 for(int i = 0;;i++){
 cout << "Enter number " << endl;
 cin >> num;
 if(num%8 == 0){
 count++;
 }
 else{
 break;
 }
 }
 cout << "Total " << count << " numbers are valid numbers."<< endl;
 }
};
int main(){
valid obj;
return 0;
}
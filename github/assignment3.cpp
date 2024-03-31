#include <iostream>
using namespace std;
// creating class
class room{
public:
float length,breadth;
//using function for input
void get(){
cout << "Enter Length of room: ";
cin >> length;
cout << "Enter Breadth of room: ";
cin >> breadth;
}
//calculating area
float area(){
float area = length * breadth;
return area;
}
//calculating perimeter
float perimeter(){
float per = 2*(length + breadth);
return per;
}
//printing output
void display(){
cout << "Length of room: " << length << endl;
cout << "Breadth of room: " << breadth << endl;
float a = area();//storing value of function in a
cout << "Area of room: " << a << endl;
float b = perimeter();//storing value of function in b
cout << "Perimeter of room: " << b << endl;
cout << "**********************************" << endl;
}
};
int main(){
room r1,r2,r3,r4,r5;
cout << "____For Room 1____" << endl;
r1.get();
cout << "____________________________" << endl;
r1.display();
cout << "____For Room 2____" << endl;
r2.get();
cout << "____________________________" << endl;
r2.display();
cout << "____For Room 3____" << endl;
r3.get();
cout << "____________________________" << endl;
r3.display();
cout << "____For Room 4____" << endl;
r4.get();
cout << "____________________________" << endl;
r4.display();
cout << "____For Room 5____" << endl;
r5.get();
cout << "____________________________" << endl;
r5.display();
return 0;
}
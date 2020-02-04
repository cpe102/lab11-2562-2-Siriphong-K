#include<iostream>
#include<string>

using namespace std;
//Declare prototype of function template mySwap() here
                                  //Overload
/*void mySwap (string &,string &);
void mySwap (int &,int &);
void mySwap (char &,char &);*/
template <typename T>
T mySwap(T &,T &);
int main(){
	
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	
	string a = "ABC", b = "DEF";
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	
	char p = 'P', q = 'Q';
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}
template <typename T>
T mySwap (T &x,T &y){
	T c=x;
	x=y;
	y=c;
	return x,y;
}
//Write definition of function template mySwap() here
                                    //Overload
/*void mySwap (int &x,int &y){
	int c=x;
	x=y;
	y=c;
	
}
void mySwap (string &x,string &y){
	string c=x;
	x=y;
	y=c;
	
}
void mySwap (char &x,char &y){
	char c=x;
	x=y;
	y=c;
	
}*/

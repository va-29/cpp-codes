#include <iostream>
using namespace std;
#include "StacksUsingArray.cpp"

int main(){
	int n;
	cout << "Enter size of Stack ";
	cin >> n;
	StacksUsingArray s(n);
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
		
	cout << s.top() << endl;
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	cout << s.size() << endl;
	
	cout << s.isEmpty() << endl;
}
	

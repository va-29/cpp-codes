#include <climits>

class StacksUsingArray {
	int *data;
	int nextIndex;
	int capacity;
	
	public:
		
		StacksUsingArray(int size){
			data = new int[size];
			nextIndex = 0;
			capacity = size;
		}
		
		//return the number of elements present is the stack currently
		int size(){
		 	return nextIndex;
		}
		
		// to check the if the stack is empty or not 
		bool isEmpty(){
			/*if ( nextIndex == 0){
				return true;
				}
			else{
				return false;
			}
			*/
			
			return (nextIndex == 0);
		}
		
		//to intern an element in the stack
		void push(int element){
			if ( nextIndex == capacity){
				
				cout << "Stack is full" << endl;
				return ;
			}
			data[nextIndex] = element;
			nextIndex ++;
			
		}
		
		//to delete an element from the stack
		int pop(){
			if ( nextIndex == 0){
				cout << "Stack is Empty" << endl;
				return INT_MIN;
			}
			
			nextIndex--;
			return data[nextIndex ];
			
		}
		
		//to display the topmost element of the stack
		int top(){
			if ( nextIndex == 0){
				cout << "Stack is Empty" << endl;
				return INT_MIN;
			}
			
			return data[nextIndex -1];
		}
	
		
};

#include <climits>

class StacksUsingArray {
	int *data;
	int nextIndex;
	int capacity;
	
	public:
		
		StacksUsingArray(){
			data = new int[4];
			nextIndex = 0;
			capacity = 4;
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
				int *newData = new int[2 * capacity];
				for( int i = 0; i < capacity; i++)
				newData[i] = data[i];
								
			delete [] data;
			capacity *= 2;
			data = newData;
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

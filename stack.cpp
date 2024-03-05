#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> mystack;
	// push()
	/*mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);

	
	//pop()
	mystack.pop();
    //mystack.pop();

    while (!mystack.empty()) { 
        cout << "stack: " << mystack.top()<<endl; 
        mystack.pop(); 
    } 

	//peek
	if (!mystack.empty()) {
        cout << "Top element: "<< mystack.top() <<endl;
    }*/
	
	//is empty()
	if (mystack.empty()) {
        cout << "True"<<endl;
    }
    else {
        cout << "False"<<endl;
    }

    // size
	cout << "Size: " << mystack.size();
	return 0;
    
}

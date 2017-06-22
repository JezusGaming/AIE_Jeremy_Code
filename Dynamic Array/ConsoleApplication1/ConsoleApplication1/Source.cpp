#include <iostream>
#include "DynamicArray.h"
#include "ObjectPool.h"
#include "Stack.h"

using namespace std;
void main()
{
	DynamicArray<int> myArray(3);

	cout << "initail sizes " << endl;
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	cout << "Adding initial values" << endl;
	myArray.PushBack(9);
	myArray.PushBack(8);
	myArray.PushBack(7);
	myArray.PushBack(6);
	myArray.PushBack(5);

	cout << "New Sizes " << endl;
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	cout << "values are" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << endl;

	myArray.Insert(1, 4);
	myArray.PushFront(6);

	cout << "Values are" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << endl;
	
	int Value = myArray.PopBack();
	cout << "Values Popped " << Value << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << endl;

	Value = myArray.Remove(3);
	cout << "Values removed " << Value << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << endl;

	Value = myArray.PopFront();
	cout << "Values Popped " << Value << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}
	cout << endl;

	cout << "New Sizes " << endl;
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	myArray.Shrink();
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	myArray.Clear();
	myArray.Shrink();
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	cout << endl;

	//Object Pool Example
	/*ObjectPool pool(50);
	Entity* p = pool.Allocate();
	pool.Deallocate(p);*/

	cout << endl;

	Stack<int>MyStack(3);

	cout << "initail sizes " << endl;
	cout << "Used " << MyStack.Size() << endl;
	cout << "should be 1 is empty: " << MyStack.IsEmpty() << endl;

	cout << "Adding initial values" << endl;
	MyStack.PushBack(9);
	MyStack.PushBack(8);
	MyStack.PushBack(7);
	MyStack.PushBack(6);
	MyStack.PushBack(5);

	cout << "should be 0 not empty: " << MyStack.IsEmpty() << endl;

	cout << "New Sizes " << endl;
	cout << "Used " << MyStack.Size() << endl;

	cout << "values are" << endl;
	for (int i = 0; i < MyStack.Size(); ++i)
	{
		cout << MyStack[i] << endl;
	}

	Value = MyStack.Pop();
	cout << "Values Popped " << Value << endl;
	for (int i = 0; i < MyStack.Size(); ++i)
	{
		cout << MyStack[i] << endl;
	}

	cout << "Top" << MyStack.Top() << endl;

	MyStack.PushBack(4);

	cout << "values are" << endl;
	for (int i = 0; i < MyStack.Size(); ++i)
	{
		cout << MyStack[i] << endl;
	}

	cout << "Top" << MyStack.Top() << endl;

	cout << "Everything looks good...?" << endl;

	system("pause");
}
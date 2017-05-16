#include <iostream>
#include "DynamicArray.h"
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

	myArray.Insert(1, 4);
	myArray.PushFront(6);

	cout << "Values are" << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	int Value = myArray.PopBack();
	cout << "Values Popped " << Value << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	Value = myArray.Remove(3);
	cout << "Values removed " << Value << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	Value = myArray.PopFront();
	cout << "Values Popped " << Value << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

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

	system("pause");
}
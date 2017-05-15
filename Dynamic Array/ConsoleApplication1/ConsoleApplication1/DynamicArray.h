#pragma once

template<typename T>
class DynamicArray
{
public:
	DynamicArray() {};
	~DynamicArray() {};

	void CreateArray(int initialSize) 
	{
		data = new dataArray[initialSize];
		capacity = initialSize;
		used = 0;
	};
	void AddToArrayEnd(int newElement) 
	{
		if (used == capacity)
		{
			newData = new dataArray[capacity * 2];
			copy(newData, data);
			delete data;
			data = newData;
			capacity *= 2;
		}
		data[used] = newElement;
		used += 1;
	};
	void AddToArrayMiddle() {};
	void RemoveFromMiddle() {};
	void RemoveFromEnd() {};
private:
	T data;
	T newData;
	int capacity;
	int used;
};


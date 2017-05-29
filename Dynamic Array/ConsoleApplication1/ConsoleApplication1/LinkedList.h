#pragma once
#include "ListNode.h"

template<typename T>
class LinkedList
{
public:
	LinkedList(int initialSize = 0)
	{
		/*int nCapacity = initialSize;
		if (nCapacity <= 0)
			nCapacity = 1;


		m_pData = new T[nCapacity];
		m_nCapacity = nCapacity;
		m_nUsed = 0;
		memset(&m_NullValue, 0, sizeof(T));*/
	}

	~LinkedList() 
	{
		/*delete m_pData;*/
	}

	void PushFront(T data)
	{
		/*Insert(0, value);*/
	}

	void PushBack(T value)
	{
		/*if (m_nUsed >= m_nCapacity)
			Resize();

		m_pData[m_nUsed] = value;
		++m_nUsed;*/
	}

	void Insert(int index, T value)
	{
		//if (index > m_nUsed)
		//	return;

		//if (m_nUsed >= m_nCapacity)
		//	Resize();
		//memcpy(m_pData + index + 1, m_pData + index, sizeof(T) * (m_nUsed - index));
		////for (int i = m_nUsed - 1; i >= index; --i)
		////{
		////	m_pData[i + 1] = m_pData[i];
		////}
		//m_pData[index] = value;
		//++m_nUsed;
	}

	void Begin()
	{

	}

	void End()
	{

	}

	void First()
	{

	}

	void Last()
	{

	}

	void Count()
	{

	}

	void Erase()
	{

	}

	T Remove()
	{
		//if (index >= m_nUsed)
		//	return m_NullValue;
		//// back up value we are removing from array
		//T value = m_pData[index];
		//// shuffle all other values across to fill removed space
		//for (int i = index; i < m_nUsed; ++i)
		//{
		//	m_pData[i] = m_pData[i + 1];
		//}
		//--m_nUsed;
		//// return removed value
		//return value;
	}

	T PopBack()
	{
		/*if (m_nUsed >= 0)
			return m_NullValue;

		--m_nUsed;
		return m_pData[m_nUsed];*/
	}

	T PopFront()
	{
		/*if (m_nUsed >= 0)
			return m_NullValue;
		return Remove(0);*/
	}

	void Empty()
	{

	}

	void Clear()
	{
		/*m_nUsed = 0;*/
	}

	int Size()
	{
		/*return m_nUsed;*/
	}

	int Capacity()
	{
		/*return m_nCapacity;*/
	}
private:
	ListNode<T>* start;
	ListNode<T>* end;
	/*T m_NullValue;
	int m_nCapacity;
	int m_nUsed;*/
};


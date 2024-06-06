#include <cassert>
#include <cstring>
#include <iostream>

template <class T>
class Array
{
public:
	Array(int size = 0, T* addr = NULL);
	virtual ~Array();
	T& operator[](int index);
	int GetSize();
	void ReSize(int n);

private:
	T* addr;
	int size;
};

template<class T>
inline Array<T>::Array(int size, T* addr)
{
	addr = new T[size];
	this->size = size;
}

template<class T>
inline Array<T>::~Array()
{
	delete[] addr;
}

template<class T>
inline T& Array<T>::operator[](int index)
{
	assert(index >= 0 && index < size);
	return *(addr + index);
}

template<class T>
inline int Array<T>::GetSize()
{
	return size;
}

template<class T>
inline void Array<T>::ReSize(int n)
{
	if (n == size) {
		return;
	}
	T* temp = new T[n];
	memcpy(temp, addr, std::min(n, size));
	addr = temp, size = n;
}

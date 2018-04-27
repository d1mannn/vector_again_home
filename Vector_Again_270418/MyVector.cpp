#include "MyVector.h"
#include "Library.h"


MyVector::MyVector(int size)
{
	this->buf_size = size;
	this->cur_size = size;
	this->els = new int[size];
}

MyVector::MyVector(const MyVector & obj)
{
	this->buf_size = obj.buf_size;
	this->cur_size = obj.cur_size;
	this->els = new int[buf_size];
	for (int i = 0; i < size(); i++)
	{
		this->els[i] = obj.els[i];
	}
}

int &MyVector::push_back(int element)
{
	if (buf_size <= 0)
	{
		buf_size = 2;
		els = new int[buf_size];
	}
	else if (cur_size >= buf_size)
	{
		buf_size *= 2;
		int * temp = new int[buf_size];
		for (int i = 0; i < size(); i++)
		{
			temp[i] = els[i];
		}
		delete[]els;
		els = temp;
	}
	els[cur_size++] = element;
	return els[cur_size - 1];
}

void MyVector::print(int i)
{
	cout << els[i] << endl;
}

int &MyVector::operator[](int index)
{	//вернет ссылку на объект
	if (index < 0 || index > size())
		return els[0];
	else
		return els[index];
}

int MyVector::operator+(MyVector & obj)
{
	return *this->els + *obj.els; // должен вернуть ЗНАЧЕНИЕ
}



//надо доделать
void MyVector::operator-(MyVector & obj)
{
	for (int i = 0; i < size(); i++)
	{
		if (this->els[i] == obj.els[i])
		{
			for (int j = i; j < size() - 1; j++)
			{
				obj.els[j] = obj.els[j + 1];
				obj.cur_size--;
			}
		}
	}
		
}

MyVector::~MyVector()
{
	delete[]els;
}

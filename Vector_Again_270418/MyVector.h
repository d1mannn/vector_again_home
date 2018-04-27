#pragma once
class MyVector
{
public:
	MyVector() = default;
	MyVector(int size);
	MyVector(const MyVector & obj);
	int size()const { return cur_size; }
	int & push_back(int element);
	void print(int i);
	int &operator[](int index);
	int operator+(MyVector &obj);
	void operator-(MyVector &obj);
	virtual ~MyVector();
private:
	int cur_size;
	int buf_size;
	int *els;
};


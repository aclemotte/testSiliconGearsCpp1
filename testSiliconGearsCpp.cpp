

#include <iostream>
#include <stdint.h>

using namespace std;

#define MAX_STACK_LENGHT 10

class Int8Stack
{
public:
	static void init(void);
	static void push(int8_t);
	static int8_t pop(void);
private:
	static int8_t i8Array[MAX_STACK_LENGHT];
	static int iIndex;
};


int8_t Int8Stack::i8Array[MAX_STACK_LENGHT];
int Int8Stack::iIndex;

void Int8Stack::init(void)
{
    iIndex = -1;
}

void Int8Stack::push(int8_t item)
{
	if(iIndex == MAX_STACK_LENGHT-1)
	{
		cout<<endl<< "Stack is full";
		return;
	}

	iIndex++;
	i8Array[iIndex] = item;
}

int8_t Int8Stack::pop(void)
{
	if(iIndex == -1)
	{
		cout<<endl<< "Stack is empty";
		return NULL;
	}

	int8_t data = i8Array[iIndex];
	iIndex--;

	return data;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

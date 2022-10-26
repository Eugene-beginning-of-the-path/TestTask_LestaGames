#include "CycleBufferStack.h"
#include <iostream>

void buffers::cycleBufferStack::pushBack(int value)
{
	buff.push_back(value);
	size++;
	last = &buff[size - 1];
}

int buffers::cycleBufferStack::popFront()
{
	if (size == 0)
		return ERROR_BUFFER_EMPTY;

	int val = buff[size - 1];
	buff.pop_back();
	size--;

	if (size == 0)
		last = nullptr;

	return val;
}

int buffers::cycleBufferStack::getValue()
{
	if (size == 0)
		return ERROR_BUFFER_EMPTY;

	static int getIndex = size - 1;
	if (getIndex == -1)
		getIndex = size - 1;

	return buff[getIndex--];
}

void buffers::cycleBufferStack::show()
{
	for (int i = 0; i < buff.size(); i++)
	{
		if (i != buff.size() - 1)
			std::cout << buff[i] << " --> ";
		else
			std::cout << buff[i];
	}
		
	std::cout << std::endl;
}
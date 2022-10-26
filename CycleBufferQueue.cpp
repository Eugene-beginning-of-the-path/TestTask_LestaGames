#include <iostream>
#include "CycleBufferQueue.h"
#include "BufferError.h"


void buffers::cycleBufferQueue::pushBack(int value)
{
	buff.push_back(value);
	size++;

	if (size == 1)
		first = &buff[0];
}

int buffers::cycleBufferQueue::popFront()
{
	if (size == 0)
		return ERROR_BUFFER_EMPTY;

	int val = buff[0];
	buff.erase(buff.begin());
	size--;
	first = &buff[0];
	if (size == 0)
		first = nullptr;

	return val;
}

int const buffers::cycleBufferQueue::getValue()
{
	if (size == 0)
		return ERROR_BUFFER_EMPTY;

	static int getIndex = 0;

	if (getIndex == size)
		getIndex = 0;
	return buff[getIndex++];
}

void buffers::cycleBufferQueue::show()
{
	for (int i = 0; i < buff.size(); i++)
	{
		if (i != buff.size() - 1)
			std::cout << buff[i] << " <-- ";
		else
			std::cout << buff[i];
	}

	std::cout << std::endl;
}
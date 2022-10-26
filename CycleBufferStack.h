#pragma once
#include <vector>
#include "BufferError.h"

namespace buffers
{
	class cycleBufferStack
	{
	private:
		std::vector<int> buff;
		int size;
		int* last;

	public:
		cycleBufferStack() : size(0), last(nullptr)
		{
			buff.reserve(5);
		}

		cycleBufferStack(int value) : size(1)
		{
			buff.push_back(value);
			last = &buff[size - 1];
		}
		
		void pushBack(int value);

		int popFront();

		int getValue();

		void show();
	};
}
#pragma once
#include <vector>

namespace buffers
{
	class cycleBufferQueue
	{
	private:
		std::vector<int> buff;
		int size;
		int* first;

	public:
		cycleBufferQueue() : size(0), first(nullptr)
		{
			buff.reserve(5);
		}

		cycleBufferQueue(int value) : size(1)
		{
			buff.push_back(value);
			first = &buff[0];
		}

		void pushBack(int value);

		int popFront();

		int const getValue();

		void show();
	};


};